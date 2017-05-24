<div class="item" id="brand-[field:global.autoindex/]" style="width:230px;">
                      		<a name="herf[field:id/]"></a>
                          <div class="lover_img">
						  <script type="text/javascript">
                            var yourString="[field:imgss /]";
                            var result=yourString.split("|");
                            document.write("<a href='/plus/view.php?aid=[field:id/]' target='_blank'><img src='/uploads/weiquanzi/"+result[0]+"' style='width:230px; height:auto' id='wqzimg[field:id/]' /></a>");




                          </script>
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
                              
                          	[field:mid runphp='yes']
                            	$name=@me;
                                $sql="select * from dede_member where mid =$name";
                                $query = mysql_query($sql);
                                $row = mysql_fetch_array($query);
                                $userids=$row['userid'];
                                if($row['face'] == ''){
                                
                                @me = '<a href="/member/index.php?uid='.$userids.'" target="_blank"><img src="/member/templets/images/dfboy.png" width="35" /></a>'; 
                                }else{ 
                                $face = $row['face'];
                                @me = '<a href="/member/index.php?uid='.$userids.'" target="_blank"><img src="'.$face.'" width="35" height="35" /></a>'; 
                                }
                            [/field:mid]
                              
                          </div>
                          <div class="lover_title" style="width:170px;">[field:say /]</div>
                          <div class="clear"></div>

                          <div style="" class="comments muted">
                              [field:id runphp='yes']
                              $aids=@me;
                              $sql="SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=$aids order by f.id desc limit 1";  
                              $query = mysql_query($sql);
                              $row = mysql_fetch_array($query);
                              if($row['face'] == ''){
                                  $face = '<img src="/member/templets/images/dfboy.png" />'; 
                              }else{ 
                                  $face = '<img src='.$row['face'].' />'; 
                              }
                              if($row[username]==''){@me='';}else{
                              @me = '<div class="comment convo clearfix"><a href="/member/index.php?uid='.$row['userid'].'" target="_blank" class="img x">'.$face.'</a><div class="content"><a href="/member/index.php?uid='.$row['userid'].'" target="_blank" class="author">'.$row['username'].'</a>:&nbsp;'.$row['msg'].'</div></div>';
                              }
                              [/field:id]
                          </div>
                          
                          <div style="display: block;" class="write convo clearfix ">
                              <form action="/plus/pl.php" id="formId[field:id/]" method="post" name="feedback" onsubmit="return sub[field:id/]();">
                                <input type="hidden" name="action" value="send" />
                                <input type="hidden" name="comtype" value="comments">
                                <input type="hidden" name="aid" value="[field:id/]" />
                                <input type="hidden" name="isconfirm" value="yes" />
                              <textarea class="clear-input GridComment ani-affected"  name="msg" autocomplete="off" id="as[field:id/]" style="background-color: rgb(255, 255, 255);" placeholder="写评论..."></textarea>
                              <input type="hidden" name="notuser" id="dcmp-submit-guest" />
                              <button id="btnsas[field:id/]" type="button" class="grid_comment_button btn" onclick="sub[field:id/]()">添加评论</button>
                              </form>
                          </div>
                        
                          <script>
							function sub[field:id/]() {  
								$.ajax({  
										cache: true,  
										type: "POST",  
										url:"/plus/pl.php",  
										data:$('#formId[field:id/]').serialize(),// 你的formid  
										async: false,  
										error: function(request) {
											alert("未知错误！");
										},  
										success: function(data) {
											if(data=='234'){
												alert("请休息一下来评论！");
											}
											if(data=='345'){
												alert("发表成功！");
												window.location.reload();
											}
											if(data=='123'){
												$('.tanchu-2').addClass('is-visible');
											}
										}  
									});
							}  
                          </script>
            
                      </div><!--item-->