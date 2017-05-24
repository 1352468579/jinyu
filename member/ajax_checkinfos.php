<?php
define('AJAXLOGIN', TRUE);
require_once(dirname(__FILE__)."/config.php");
AjaxHead();
if($myurl == '') exit('');
$uid  = $cfg_ml->M_LoginID;
!$cfg_ml->fields['face'] && $face = ($cfg_ml->fields['sex'] == '女')? 'dfgirl' : 'dfboy';
$facepic = empty($face)? $cfg_ml->fields['face'] : $GLOBALS['cfg_memberurl'].'/templets/images/'.$face.'.png';
$moodmsg = $dsql->GetOne("SELECT * FROM #@__member_msg WHERE mid='{$cfg_ml->M_ID}' ORDER BY dtime desc");
?>

    	<div class="index_reg_info">
            <div class="index_reg_info2">
            	<a href="/member/"><img src="<?php echo $facepic; ?>" width="120" /></a>
                <h3><?php echo $cfg_ml->M_UserName; ?></h3>
                <p><?php if(is_array($moodmsg)){echo $moodmsg['msg'];} else {?>还没有个性签名，你也太懒了吧！<?php } ?></p>
                <div class="index_reg_info3"><a href="/member">进入个人中心</a></div>
            </div>
        </div>
