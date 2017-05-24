<?php
define('AJAXLOGIN', TRUE);

require_once(dirname(__FILE__)."/config.php");
AjaxHead();
if($myurl == '') exit('');

$uid  = $cfg_ml->M_LoginID;

!$cfg_ml->fields['face'] && $face = ($cfg_ml->fields['sex'] == '女')? 'dfgirl' : 'dfboy';

$facepic = empty($face)? $cfg_ml->fields['face'] : $GLOBALS['cfg_memberurl'].'/templets/images/'.$face.'.png';
?>
<a href="/member/article_add.php" class="add_wqz"></a>
<!-- /userinfo -->