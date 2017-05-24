<?php
/**
 * @version        $Id: ajax_loginsta.php 1 8:38 2010年7月9日Z tianya $
 * @package        DedeCMS.Member
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
define('AJAXLOGIN', TRUE);

require_once(dirname(__FILE__)."/config.php");
AjaxHead();
if($myurl == '') exit('');

$uid  = $cfg_ml->M_LoginID;

!$cfg_ml->fields['face'] && $face = ($cfg_ml->fields['sex'] == '女')? 'dfgirl' : 'dfboy';

$facepic = empty($face)? $cfg_ml->fields['face'] : $GLOBALS['cfg_memberurl'].'/templets/images/'.$face.'.png';
?>


<a href="<?php echo $cfg_memberurl; ?>/index.php"><?php echo $cfg_ml->M_UserName; ?></a> <i>|</i>

<?php
       $pms = $dsql->GetOne("SELECT COUNT(*) AS nums FROM #@__member_pms WHERE toid='{$cfg_ml->M_ID}' AND `hasview`=0 AND folder = 'inbox'");
		if($pms['nums'] > 0)
		{
			echo "<a href='/member/pm.php'>私信[{$pms['nums']}]</a>";
		}
		elseif($pms['nums']==0)
		{
			echo "<a href='/member/pm.php'>私信[0]</a>";
		}
       ?>
 <i>|</i> 
 <a href="<?php echo $cfg_memberurl; ?>/index_do.php?fmdo=login&dopost=exit">退出</a>
<!-- /userinfo -->