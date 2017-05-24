<?php
define('AJAXLOGIN', TRUE);
require_once(dirname(__FILE__)."/config.php");
include_once(DEDEINC."/enums.func.php");
AjaxHead();
$uid  = $cfg_ml->M_LoginID;
?>
<?php 
$pms = $dsql->GetOne("select m.userid,m.uname,m.sex,m.face,p.birthday,p.height,p.income,p.place,p.lovemsg from dede_member as m left join dede_member_person as p on m.mid=p.mid where m.mid>=(SELECT floor(RAND() * (SELECT MAX(mid) FROM `dede_member`))) and m.uname!='' and m.userid!='admin' ORDER BY m.mid LIMIT 1");
if($pms['sex']=='男' && $pms['face']==''){
	$facea='/member/templets/images/dfboy.png';
}else if($pms['sex']=='女' && $pms['face']==''){
	$facea='/member/templets/images/dfgirl.png';
}else{
	$facea=$pms['face'];
}

?>

    <div class="popup_gt_wrap" id="btm-tuijian">
        <div class="popup_gt" style="bottom:100px;">
            <div class="popup_gt-cent clearfix">
            	<div class="popup_close"><a href="javascript:closetj();" title="关闭"><img src="/images/close3.png" width="10" /></a></div>
                <div class="popup_gt-fl fl">
                    <a target="_blank" href="/member/index.php?uid=<?php echo $pms['userid']; ?>"><img style="border:none;" src="<?php echo $facea; ?>"></a>
                </div>
                
                <div class="popup_gt-fr fl">
                    <div class="popup_gt-h c3e"><a target="_blank" href="/member/index.php?uid=<?php echo $pms['userid']; ?>"><?php echo $pms['uname']; ?></a></div>
                    <div class="popup_gt-c ca f14">
                        <span><?php echo $pms['birthday']; ?>岁</span>
                        <span><?php echo $pms['height']; ?>cm</span>
                        <span><?php  if($pms['city']==''){ echo "保密";}else{echo $pms['city'];}?></span>
                        <span><?php echo GetEnumsValue('income',$pms['income']); ?></span>
                    </div>
                    
                    <div class="popup_gt-f clearfix">
                        <div class="popup_gt-f-fl c6 f12 fl gxq"><?php if($pms['lovemsg']==''){echo "此人很懒，什么也没写 ";}else{ echo $pms['lovemsg'];} ?></div>
                        <div class="popup_gt-f-fr cf fl f12"><a target="_blank" href="/member/index.php?uid=<?php echo $pms['userid']; ?>">看一看</a></div>
                    </div>
                </div>
            </div>
        </div>
    </div>
