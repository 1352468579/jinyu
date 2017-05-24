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
                          
                          <div class="bdsharebuttonbox"><a href="#" class="bds_more" data-cmd="more">分享</a></div>
                          <script>
						  window._bd_share_config={
							  "common":{
								  "bdSnsKey":{},
								  "bdText":"[field:description /]",
								  "bdUrl":"http://192.168.0.11/plus/view.php?aid=[field:id/]",
								  "bdMini":"1",
								  "bdMiniList":false,
								  "bdPic":"http://192.168.0.11/[field:litpic /]",
								  "bdStyle":"1",
								  "bdSize":"16"
								},
								"share":{}};
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
                          <div class="boder1"></div>
                      </div><!--item-->