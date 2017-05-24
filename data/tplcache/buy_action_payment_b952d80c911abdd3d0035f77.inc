<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>" />
<title>订单确认 - 会员中心 -<?php echo $cfg_webname; ?></title>
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
        <div class="tabOther doPost" style="margin-top:5px"> <a href="buy.php">购买会员服务</a> </div>
      </div>
      <div id="mainCp">
        <h3 class="meTitle">订单确认</h3>
        <div class="appMsg">
          <p class="tips">* 你申请购买的产品如下，确认无误后请点击“购买并支付”按钮，进行网上支付，如果支付失败，请与管理员联系其它支付方式：</p>
        </div>
        <div class="postForm">
          <h3 class="meTitle" style="padding-top: 20px;">购买点卡/会员服务</h3>
          <form method="post" name="E_FORM" action="buy_action.php" target="_blank">
            <input type="hidden" name="pd_encode" value="<?php echo $pr_encode;?>">
            <input type="hidden" name="pd_verify" value="<?php echo $pr_verify;?>">
             <input type="hidden" name="aid" value="<?php echo $buyid;?>">
            <table width="100%" border="0" cellpadding="0" cellspacing="0" class="list">
              <tbody>
                <tr>
                  <td width="15%" align="right" valign="top">订单编号：</td>
                  <td><?php echo $buyid?></td>
                </tr>
                <tr>
                  <td align="right" valign="top">产品类型：</td>
                  <td><?php echo $ptype?></td>
                </tr>
                <tr>
                  <td align="right" valign="top">产品名称：</td>
                  <td><?php echo $pname?></td>
                </tr>
                <tr>
                  <td align="right" valign="top"><span class="td1">产品价格：</span></td>
                  <td><?php echo $price;?>元</td>
                </tr>
                <tr>
                  <td align="right" valign="top"><span class="td1">支付方式：</span></td>
                  <td><table border="0" cellpadding="0" cellspacing="0">
                      <?php  foreach($GLOBALS['payment_list'] as $key=>$value){ ?>
                      <tr onMouseMove="javascript:this.bgColor='#F8F8F8';" onMouseOut="javascript:this.bgColor='#FFFFFF';">
                        <td width="10%" align="right" style="vertical-align:middle;"><?php if($value['code']=="cod" || $value['code']=="bank"){ ?> <input name="paytype" type="radio" value="<?php echo $value['id']; ?>"  disabled="disabled"/><?php
}
else{
?><input name="paytype" type="radio" value="<?php echo $value['id']; ?>"/><?php } ?></td>
                        <td width="20%" valign="middle" style="vertical-align:middle;"> <?php echo $value['name']; ?> </td>
                        <td width="60%"> <?php echo $value['description']; ?> </td>
                        <td width="10%" align="center"><span class="fc-f60"><?php echo $value['fee']; ?>元</span></td>
                      </tr>
                      <?php  }    ?>

                  </table></td>
                </tr>
                <tr>
                  <td align="right" valign="top">&nbsp;</td>
                  <td><button class="button5" type="submit">购买并支付</button>
                    <button class="buttonGary2 ml10" type="button" onclick="location='buy.php'">返回</button></td>
                </tr>
              </tbody>
            </table>
          </form>
        </div>
      </div>
      <!--主操作区域 --> 
    </div>
  </div>
</div>

  <?php include(DEDEMEMBER."/templets/foot.htm"); ?>
</body>
</html>