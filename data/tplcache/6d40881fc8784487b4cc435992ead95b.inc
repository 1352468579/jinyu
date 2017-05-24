<div class="item" id="brand-[field:global.autoindex/]" style="width:173px;">
                          <div class="lover_img">
                          <a href="[field:arcurl/]">
                          <img src="[field:imgss /]" alt="[field:title/]" width="173" style="min-height:205px; max-height:600px;" />
                          </div>
                          <div class="clear"></div>
                          <div class="lover_tx">
                              <a href="/member/index.php?uid=[field:writer /]" target="_blank">
                          	[field:mid runphp='yes']
                            	$name=@me;
                                $sql="select * from dede_member where mid =$name";
                                $query = mysql_query($sql);
                                $row = mysql_fetch_array($query);
                                if($row['face'] == ''){
                                    @me = '<img src="/member/templets/images/dfboy.png" width="35" />'; 
                                }else{ 
                                    $face = $row['face']; @me = '<img src="'.$face.'" width="35" height="35" />'; 
                                }
                            [/field:mid]
                              </a>
                          </div>
                          <div class="lover_title" style=" width:100px;">[field:say /]</div>
                      </div><!--item-->