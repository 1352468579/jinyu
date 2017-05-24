<?php
function litimgurls($imgid=0)
{
    global $lit_imglist,$dsql;
    //获取附加表
    $row = $dsql->GetOne("SELECT c.addtable FROM #@__archives AS a LEFT JOIN #@__channeltype AS c 
                                                            ON a.channel=c.id where a.id='$imgid'");
    $addtable = trim($row['addtable']);
    
    //获取图片附加表imgurls字段内容进行处理
    $row = $dsql->GetOne("Select imgurls From `$addtable` where aid='$imgid'");
    
    //调用inc_channel_unit.php中ChannelUnit类
    $ChannelUnit = new ChannelUnit(2,$imgid);
    
    //调用ChannelUnit类中GetlitImgLinks方法处理缩略图
    $lit_imglist = $ChannelUnit->GetlitImgLinks($row['imgurls']);
    
    //返回结果
    return $lit_imglist;
}
function birthday3($birthday){   list($year,$month,$day) = explode("-",$birthday);   $year_diff = date("Y") - $year;   $month_diff = date("m") - $month;   $day_diff  = date("d") - $day;   if ($day_diff < 0 || $month_diff < 0)    $year_diff--;   return $year_diff; } 

/*
几个形参: 
　　$aid (文章id) 
　　$num (调用图片的数量)
　　$style (两种调用样式)
*/
function Getimgs($aid, $num = 0, $style = ''){
    global $dsql; 
    $imgurls = ''; 
    $row = $dsql -> getone("Select body From `#@__addonarticle` where aid='$aid'"); //若上一行注释删除 请将此行代码注释或删除 
    $imgurls = $row['body'];
    preg_match_all("/<[img|IMG].*?src=\"(.*?)\".*?\/>/", $imgurls, $wordcount); 
    $count = count($wordcount[1]); 
    if ($num > $count || $num == 0)
    { 
        $num = $count; 
    } 
    for($i = 0;$i < $num;$i++){
        if($style == 'li')
        {
            $imglist .='<li><img src="'. trim($wordcount[1][$i]) .'" /></li>';
        }else{ 
            $imglist .= '<img src="'. trim($wordcount[1][$i]) .'" />';
        } 
    } 
    return $imglist; 
}

//点赞功能
function zan($aid)
{
    global $dsql;
    $row = $dsql->GetOne("Select id,zan From dede_archives where id='".$aid."'");
    return $row['zan'];
}
	
	
	
function test_get_face($mid){
    global $db;
    $result=$db->getOne("select face,sex from zmsys_member where mid='{$mid}'");
    if(empty($result["face"])){
        if($result["sex"]=="男"){
            return '<img src="/member/templets/images/dfboy.png" />';//返回默认男性头像
        }else{
            return '<img src="/member/templets/images/dfgirl.png" />';//返回默认女性头像
        }
    }else{
        return '<img src="'.$result["face"].'" />';//返回会员头像
    }
}

$uid  = $cfg_ml->M_LoginID;
!$cfg_ml->fields['face'] && $face = ($cfg_ml->fields['sex'] == '女')? 'dfgirl' : 'dfboy';
$facepic = empty($face)? $cfg_ml->fields['face'] : $GLOBALS['cfg_memberurl'].'/templets/images/'.$face.'.png';


function face($mid){
	global $dsql;
	if($mid <> 0){
		$row = $dsql->GetOne("select * from dede_member where mid = '$mid'");
		echo "select * from dede_member where mid = '$mid'";
		if($row['face'] == ''){
			$face = '<img src="/member/templets/images/dfboy.png" />';
		}else{
			$face = $row['face'];
			$face = '<img src="'.$face.'" />';
		}
	}
	return $face;
}

function GetMemberInfos($fields,$mid){ 
global $dsql; if($mid <= 0){ 
$revalue = "Error"; } 
else{ 
$row=$dsql->GetOne("select * from dede_member where mid = '{$mid}'"); 
if(!is_array($row)){ 
$revalue = "Not user"; 
} else{ 
$revalue = $row[$fields]; 
} 
} 
return $revalue; 
} 