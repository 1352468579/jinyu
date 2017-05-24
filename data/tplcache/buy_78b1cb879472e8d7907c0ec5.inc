<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>" />
<title>点卡/会员服务购买 - 会员中心 - <?php echo $cfg_webname; ?></title>
<link href="templets/style/base.css" rel="stylesheet" type="text/css" />
<script type="text/javascript" src="templets/js/j.js"></script>
<script type="text/javascript" src="templets/js/load.js"></script>
<script type="text/javascript" src="templets/js/leftmenu.js"></script>
</head>
<body>
  <?php include(DEDEMEMBER."/templets/head.htm"); ?>
<div id="main">
  <div id="content" class="w1000 clearfix">
    <?php include(DEDEMEMBER."/templets/menu.php"); ?>
    <div id="mcpmain">
      <div id="appTab">
        <ul>
           <li class="thisTab"><a href="buy.php">会员升级</a></li>
           <li><a href="operation.php">会员定单</a></li>
        </ul>
      </div>
      <div id="mainCp">
        <div class="appMsg">
          <p class="tips"><?php echo $cfg_ml->GetSta($dsql); ?></p>
        </div>
        <!--内容消息提示 -->

      <div class="postForm">
        <h3 class="meTitle">会员升级</h3>
            <form name="f1" action="buy_action.php" method="post">
              <input type="hidden" name="product" value="member" />
              <table width="100%" border="0" cellpadding="0" cellspacing="0" class="list">
                <thead>
                <tr>
                    <th colspan='5' style='text-align:left;padding-left:10px;height:24px;line-height:24px;'>会员升级:</th>
                 </tr>
                </thead>
                <tr style='height:28px;background:#F9FEE9;'>
                    <th width="10%">选择</th>
                    <th >产品名称</th>
                    <th width="12%">会员类型</th>
                    <th width="12%">时限(天)</th>
                    <th width="10%">价格</th>
                 </tr>
                <tbody>
                  <?php echo $membertypes?>
                </tbody>
              </table>
              <button class="button2 mt5" type="submit">购买</button>
            </form>
          </div>  
 </div>
<!--主操作区域 -->
    </div>
  </div>
<?php include(DEDEMEMBER."/templets/foot.htm"); ?>
</div>
</body>
</html>