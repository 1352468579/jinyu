<li>
                        [field:face runphp='yes']
                        	$face1=@me;
                        	if($face1 == ''){
                            	@me='<img src="/member/templets/images/dfboy.png" />';
                            }else{
                            	@me='<img src='.$face1.' />'; 
                            }
                        [/field:face]
                        <a href="/member/index.php?uid=[field:userid/]" target="_blank" class="hd_bm_list_img"><img src="/images/tx2_07.png" /></a>
                        <a href="/member/index.php?uid=[field:userid/]" class="hd_bm_list_name">[field:uname/]</a>
                        <p><span>于[field:shijian/]报名了活动。</span><br /><a href="/a/huodong/[field:aid/].html" class="hd_bm_list_tt">[field:huodong/]</a></p>
                        </li>