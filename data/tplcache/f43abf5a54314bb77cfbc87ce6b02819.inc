<div class="item" id="brand-[field:global.autoindex/]">
                      
                          <div class="lover_img">
                          <a href="[field:arcurl/]" target="_blank">
                          <img src="[field:imgss /]" alt="[field:title/]" style="min-height:205px; max-height:600px;" />
                          </a>
                          </div>
                          
                          <div class="clear"></div>
                          <div class="zan">
                          <p><a href="javascript:;" id="zana[field:id/]" title="赞一个" class="img_on" rel="[field:id/]"><i>[field:id function="zan(@me)"/]</i></a></p>
                          </div>
                          
                          <div class="seel"><i></i>[field:click /]</div>
                          
							<script>
                            window._bd_share_config={
                                "common":{
                                    "bdSnsKey":{},
                                    "bdDesc":"[field:description /]",
                                    "bdText":"[field:description /]",
                                    "bdUrl":"http://192.168.0.11/plus/view.php?aid=[field:id/]",
                                    "bdMini":"2",
                                    "bdMiniList":false,
                                    "bdPic":"http://192.168.0.11/[field:litpic /]",
                                    "bdStyle":"0",
                                    "bdSize":"16"},
                                    "image":{
                                        "viewList":["weixin","sqq","tsina","qzone","tqq"],
                                        "viewText":"分享：",
                                        "viewSize":"16"
                                    }};
                                    with(document)0[(getElementsByTagName('head')[0]||body).appendChild(createElement('script')).src='http://bdimg.share.baidu.com/static/api/js/share.js?v=89860593.js?cdnversion='+~(-new Date()/36e5)];
                            </script>

                          <div class="clear"></div>
                          <div class="lover_tx">
                              <a href="/member/index.php?uid=[field:writer /]" target="_blank">
                          	[field:writer runphp='yes']
                            	$name=@me;
                                $sql="select * from dede_member where userid =$name";
                                $query = mysql_query($sql);
                                $row = mysql_fetch_array($query);
                                if($row['face'] == ''){
                                    @me = '<img src="/member/templets/images/dfboy.png" width="35" />'; 
                                }else{ 
                                    $face = $row['face']; @me = '<img src="'.$face.'" width="35" height="35" />'; 
                                }
                            [/field:writer]
                              </a>
                          </div>
                          <div class="lover_title">[field:say /]</div>
                          <div class="clear"></div>

                          <div style="" class="comments muted">
                              <div class="comment convo clearfix">
                                  <a href="" class="img x"><img src="http://img.hb.aicdn.com/15e6186834eb33f2c4fc21ef175cbdeee3af17cd1251f-bCB08N_sq75sf" class="avt"></a>
                                  <div class="content">
                                      <a href="" class="author">噗嗤哗啦阿西吧</a>:&nbsp;这是哪里还是ps图片？
                                  </div>
                              </div>
                          </div>
                          
                          <div style="display: block;" class="write convo clearfix ">
                              <a href="" class="img x"><img src="http://img.hb.aicdn.com/3fa40bb939d6caf6e69a1bd347406b87fb720d8f3156-EzYN9q_sq75sf"></a>
                              <form action="#commettop" method="post" name="feedback">
                                <input type="hidden" name="dopost" value="send" />
                                <input type="hidden" name="comtype" value="comments">
                                <input type="hidden" name="aid" value="[field:id/]" />
                                <input type="hidden" name="fid" id='feedbackfid' value="0" />
                              <textarea class="clear-input GridComment ani-affected"  name="msg" autocomplete="off" id="as[field:id/]" style="background-color: rgb(255, 255, 255);" placeholder="请输入..."></textarea>
                              <input type="hidden" name="notuser" id="dcmp-submit-guest" />
                              <button onClick='PostComment()' id="btnsas[field:id/]"  class="grid_comment_button btn">添加评论</button>
                              </form>
                          </div>
                          
                          
                          
                          <script type="text/javascript">
							function postBadGood(ftype,fid)
							{
								var taget_obj = document.getElementById(ftype+fid);
								var saveid = GetCookie('badgoodid');
								if(saveid != null)
								{
									 var saveids = saveid.split(',');
									 var hasid = false;
									 saveid = '';
									 j = 1;
									 for(i=saveids.length-1;i>=0;i--)
									 {
										  if(saveids[i]==fid && hasid) continue;
										  else {
											if(saveids[i]==fid && !hasid) hasid = true;
											saveid += (saveid=='' ? saveids[i] : ','+saveids[i]);
											j++;
											if(j==10 && hasid) break;
											if(j==9 && !hasid) break;
										  }
									 }
								 if(hasid) { alert('您刚才已表决过了喔！'); return false; }
								 else saveid += ','+fid;
									 SetCookie('badgoodid',saveid,1);
								}
								else
								{
									SetCookie('badgoodid',fid,1);
								}
							
							  myajax = new DedeAjax(taget_obj,false,false,'','','');
							  myajax.SendGet2("/plus/feedback.php?aid=1&action="+ftype+"&fid="+fid);
							  DedeXHTTP = null;
							}
							
							function LoadCommets(page)
							{
									var taget_obj = document.getElementById('commetcontent');
									var waithtml = "";
									var myajax = new DedeAjax(taget_obj, true, true, '', 'x', waithtml);
									myajax.SendGet2("/plus/feedback_ajax.php?dopost=getlist&aid=[field:id/]&page="+page);
									DedeXHTTP = null;
							}
							function PostComment()
							{
									var f = document.feedback;
									var nface = '6';
									var nfeedbacktype = 'feedback';
									var nnotuser = '';
									var nusername = '';
									var npwd = '';
									var taget_obj = $DE('commetcontentNew');
									var waithtml = "";
									if(f.msg.value=='')
									{
										alert("评论内容不能为空！");
										return;
									}
									if(f.msg.value.length > 500)
									{
										alert("你的评论是不是太长了？请填写500字以内的评论。");
										return;
									}
									if(f.feedbacktype) {
										for(var i=0; i < f.feedbacktype.length; i++)
											if(f.feedbacktype[i].checked) nfeedbacktype = f.feedbacktype[i].value;
									}
									if(f.face) {
										for(var j=0; j < f.face.length; j++)
											if(f.face[j].checked) nface = f.face[j].value;
									}
									if(f.notuser.checked) nnotuser = '1';
									if(f.username) nusername = f.username.value;
									if(f.pwd) npwd = f.pwd.value;
									
									var myajax = new DedeAjax(taget_obj, false, true, '', '', waithtml);
									myajax.sendlang = 'utf-8';
									myajax.AddKeyN('dopost', 'send');
									myajax.AddKeyN('aid', '{dede:field.id/}');
									myajax.AddKeyN('fid', f.fid.value);
									myajax.AddKeyN('face', nface);
									myajax.AddKeyN('feedbacktype', nfeedbacktype);
									myajax.AddKeyN('notuser', nnotuser);
									myajax.AddKeyN('username', nusername);
									myajax.AddKeyN('pwd', npwd);
									myajax.AddKeyN('msg', f.msg.value);
									myajax.SendPost2('/plus/feedback_ajax.php');
									f.msg.value = '';
									f.fid.value = 0;
							}
							function quoteCommet(fid)
							{
								document.feedback.fid.value = fid;
							}
							LoadCommets(1);
                          </script>
                          

                      </div><!--item-->