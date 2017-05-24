<?php
define('AJAXLOGIN', TRUE);

require_once(dirname(__FILE__)."/config.php");
AjaxHead();
if($myurl == '') exit('');

$uid  = $cfg_ml->M_LoginID;

!$cfg_ml->fields['face'] && $face = ($cfg_ml->fields['sex'] == '女')? 'dfgirl' : 'dfboy';

$facepic = empty($face)? $cfg_ml->fields['face'] : $GLOBALS['cfg_memberurl'].'/templets/images/'.$face.'.png';
?>
<a href="/member/index.php?uid=<?php echo $cfg_ml->M_LoginID; ?>" class="img x" target="_blank"><img src="<?php echo $facepic; ?>"></a>
<!-- /userinfo -->