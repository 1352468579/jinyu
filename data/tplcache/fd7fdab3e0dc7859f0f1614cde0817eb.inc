<div class="item" id="brand-[field:global.autoindex/]">
                      		<a name="herf[field:id/]"></a>
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
                              [field:id runphp='yes']
                              $aids=@me;
                              $sql="SELECT f.username,f.msg,m.face FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=$aids order by f.id desc limit 1";  
                              $query = mysql_query($sql);
                              $row = mysql_fetch_array($query);
                              if($row['face'] == ''){
                                  $face = '<img src="/member/templets/images/dfboy.png" />'; 
                              }else{ 
                                  $face = '<img src='.$row['face'].' />'; 
                              }
                              @me = '
                              <a href="" class="img x"><img src='.$face.' /></a>'; 
                 
                              [/field:id]
                              </div>
                          </div>
                          
                          <div style="display: block;" class="write convo clearfix ">
                              <form action="/plus/pl.php" method="post" name="feedback">
                                <input type="hidden" name="action" value="send" />
                                <input type="hidden" name="comtype" value="comments">
                                <input type="hidden" name="aid" value="[field:id/]" />
                                <input type="hidden" name="isconfirm" value="yes" />
                              <textarea class="clear-input GridComment ani-affected"  name="msg" autocomplete="off" id="as[field:id/]" style="background-color: rgb(255, 255, 255);" placeholder="写评论..."></textarea>
                              <input type="hidden" name="notuser" id="dcmp-submit-guest" />
                              <button type="submit" id="btnsas[field:id/]" class="grid_comment_button btn">添加评论</button>
                              </form>
                          </div>
            
                      </div><!--item-->