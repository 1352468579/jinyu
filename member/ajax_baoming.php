<?php
define('AJAXLOGIN', TRUE);
require_once(dirname(__FILE__)."/config.php");
AjaxHead();
if($myurl == '') exit('');
$uid  = $cfg_ml->M_LoginID;
$huodngtitle=$_GET['huodngtitle'];
$huodngid=$_GET['huodngid'];
?>
                        <h3>在线报名</h3>
                        <div class="sixin-input">
                        <form action="/plus/diy.php" id="formId3" method="post" onsubmit="return sub();">
                          <input type="hidden" name="action" value="post" />
                          <input type="hidden" name="diyid" value="1" />
                          <input type="hidden" name="do" value="2" />
                          <input type='hidden' name='huodong' id='huodong' value='<?php echo $huodngtitle; ?>' />
                          <input type='hidden' name='shijian' id='shijian' value='' />
                          <input type='hidden' name='userid' id='userid' value='<?php echo $uid; ?>' />
                          <input type='hidden' name='aid' id='aid' value='<?php echo $huodngid; ?>' />

                          <input type="hidden" name="dede_fields" value="shouji,text;xingming,text;xingbie,radio;renshu,select;beizhu,multitext;huodong,text;userid,text;shijian,text;aid,text" />
                            
                            <p>性别： &nbsp;<input type='radio' name='xingbie' class='np' value='男' checked> 男 &nbsp; 
<input type='radio' name='xingbie' class='np' value='女'> 女</p>

                            <p><input type='text' name='xingming' id='xingming'  class='textreg' onkeyup="STip(this.value, event);" value="姓名" onFocus="if(this.value=='姓名'){this.value='';}else{this.value=this.value;}" onBlur="if(this.value=='')this.value='姓名'"/></p>
                            
                            <p><input type='text' name='shouji' id='shouji' class='textreg' onkeyup="STip(this.value, event);" value="手机号" onFocus="if(this.value=='手机号'){this.value='';}else{this.value=this.value;}" onBlur="if(this.value=='')this.value='手机号'" /></p>
                            
                            <p>
                            <select name='renshu' style='width:300px' class='textreg'>
                                <option value='1'>1人</option>
                                <option value='2'>2人</option>
                                <option value='3'>3人</option>
                                <option value='4'>4人</option>
                                <option value='5'>5人</option>
                                <option value='6'>6人</option>
                                <option value='7'>7人</option>
                                <option value='8'>8人</option>
                                <option value='9'>9人</option>
                                <option value='10'>10人</option>
                            </select>
                            </p>
                            <button id="btnSignCheck" type="button" onclick="sub()" class="submit" />马上报名</button>
                        </form>
                        </div>
                        
                        <a href="javascript:;" onclick="cdpopupclose2()" class="cd-popup-close-2">close</a>
