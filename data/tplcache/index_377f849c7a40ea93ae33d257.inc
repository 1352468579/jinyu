<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>会员中心 -<?php echo $cfg_webname; ?></title>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>" />
<link href="templets/style/index.css" rel="stylesheet" type="text/css" />
<link href="templets/style/boxy.css" rel="stylesheet" type="text/css" />
<script type="text/javascript" src="templets/js/j.js"></script>
<script type="text/javascript" src="templets/js/jquery.boxy.js"></script>
<script type="text/javascript" src="templets/js/load_index.js"></script>
<script type="text/javascript" src="templets/js/leftmenu.js"></script>
<script type="text/javascript" src="templets/js/face.js"></script>
<script type="text/javascript" src="templets/js/Dialog.js"></script>
<script type="text/javascript" src="templets/js/jquery.js"></script>
<script type="text/javascript" src="templets/js/feed.js"></script>
</head>
<body>

<?php include(DEDEMEMBER."/templets/head.htm"); ?>


<div id="main">

<div id="content" class="w1000 clearfix">
  <?php include(DEDEMEMBER."/templets/menu.php"); ?>
  <div class="755">
    <div class="main-wrap">
    
    	<div class="sns_icon">
        	<a href="pm.php?TB_iframe=true&height=600&width=700" title="我的短信息" class="sx-icon">
            <?php echo $pms['nums'];?>
            </a>
        	<a href="javascript:;" class="fwl-icon" title="空间访问量"><?php echo $minfos['homecount']; ?></a>
            <a href="/member/myfriend.php" class="hyl-icon" title="好友数量"><?php echo $minfos['friend']; ?></a>
            <a href="/member/edit_fullinfo.php" class="step-icon" title="完善个人资料"></a>
        </div>
        
        <div class="clear"></div>


	<div class="qingyuan">
    <h2>每日情缘速配</h2>
    <ul>
    	<?php $sex=$cfg_ml->fields['sex'];  foreach ($newfriends as $newfriend){  
        if($sex!=$newfriend['sex']){
        ?>
        
    	<li>
        	<a href="<?php echo $cfg_cmsurl;?>/member/index.php?uid=<?php echo $newfriend['userid'];?>" target="_blank">
            	<div class="qy_img">
                <?php if(!$newfriend['face']==""){  echo "<img src=".$newfriend['face']." />"; }else{ if($newfriend['sex']=='女') echo "<img src='templets/images/dfgirl.png' />"; else echo "<img src='templets/images/dfboy.png' />"; }?>
                </div>
            	<div class="qy_name"><?php echo $newfriend['uname'];?> <i class="qy_sfz">实名认证</i></div>
                <div class="qy_info">
                	<p>年龄：<?php echo $newfriend['birthday'];?>岁 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 地区：<?php  if($newfriend['place']=='0'){ echo "保密";}else{$places = GetEnumsTypes($newfriend['place']);echo ( isset($em_nativeplaces[$places['top']]) ?  $em_nativeplaces[$places['top']] : ''); echo ( isset($em_nativeplaces[$places['son']]) ?  $em_nativeplaces[$places['son']] : '');}?><br />身高：<?php echo $newfriend['height'];?>CM &nbsp; 月薪：<?php echo GetEnumsValue('income',$newfriend['income']); ?></p>
                    <span><?php if($newfriend['lovemsg']==''){echo "此人什么都不想说...";}else{ echo $newfriend['lovemsg'];}?></span>
                </div>
            </a>
        </li>
        <?php }} ?>
        
    </ul>
    
    </div>

      
    </div>
  </div>
</div>
<?php include(DEDEMEMBER."/templets/foot.htm"); ?>
</div>
</body>
</html>