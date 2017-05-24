<?php
define('AJAXLOGIN', TRUE);
require_once(dirname(__FILE__)."/config.php");
AjaxHead();
if($myurl == '') exit('');
$faceurl=$_GET['faceurl'];
$msgtoid=$_GET['msgtoid'];
?>
<h3>发送私信</h3>
<form id="formId" onsubmit="return sub();" action="/member/pm2.php" method="post" name="form1"> 
    <input type='hidden' name='dopost' value='savesend' />
    <input name="subject" type="hidden" id="titlesx" size="50" maxlength="70"/>
    <input name="msgtoid" type="hidden" id="msgtoid" value="<?php echo $msgtoid; ?>"/>
    <div class="sixin-img"><img src="<?php echo $usertx; ?>" id="usertx" /></div>
    <div class="sixin-text">
        <textarea name="message" cols="50" rows="" id="saysx" onBlur="blurs()"></textarea>
    </div>
    <button class="button2" type="button" onclick="sub()">发送</button>
</form>

<a href="javascript:;" onclick="cdpopupclose2(-2)" class="cd-popup-close-2">close</a>

<!-- /userinfo -->
