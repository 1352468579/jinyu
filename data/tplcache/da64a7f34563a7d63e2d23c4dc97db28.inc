<div class="item" id="brand-[field:global.autoindex/]">
                      
                          <div class="lover_img">
                          <a href="[field:arcurl/]" target="_blank">
                          <img src="[field:litpic /]" alt="[field:title/]" style="min-height:205px; max-height:600px;" />
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
                          <div class="lover_title">[field:description /]</div>
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
                              <form action="" method="POST">
                                  <textarea placeholder="添加评论" onclick="openbtn([field:id/]);" class="clear-input GridComment ani-affected" autocomplete="off" style="background-color: rgb(255, 255, 255);"></textarea>
                                  <a href="#" onclick="return false;" style="display:none;" id="btns[field:id/]" class="grid_comment_button btn">添加评论</a>
                              </form>
                          </div>
                          

                      </div><!--item-->