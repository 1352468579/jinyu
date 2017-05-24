<div class="item" id="brand-[field:global.autoindex/]">
                          <div class="lover_img">
                          <a href="[field:arcurl/]" target="_blank">
                          <img src="[field:litpic /]" alt="[field:title/]" style="min-height:205px; max-height:600px;" />
                          </div>
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
                          <div class="zan"><p><a href="javascript:;" title="赞一个" class="img_on" rel="{dede:field.id/}">{dede:field.id function="zan(@me)"/}</a></p></div>
                      </div><!--item-->