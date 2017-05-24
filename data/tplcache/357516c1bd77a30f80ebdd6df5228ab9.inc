<li>
                <dl>
                    <dt>
                        <a href="[field:arcurl/]" target="_blank">
                        <img src="[field:litpic/]" alt="[field:title/]" height="150" width="300">
                        </a>
                    	[field:zhuangtai runphp='yes']
                        	$zhuangtai=@me;
                            if($zhuangtai=='已结束'){
                            	@me='<span class="enterStop">报名结束</span>';
                            }else{
                            	@me='<span class="enterNow">正在报名</span>';
                            }
                        [/field:zhuangtai]
                    </dt>
                    <dd>
                        <h4>[field:title/]</h4>
                        <p class="picScroll-p"><span>[field:didian/]</span><span>[field:feiyong/]</span><span>[field:baoming/]人报名</span></p>
                    	[field:zhuangtai runphp='yes']
                        	$zhuangtai=@me;
                            if($zhuangtai=='已结束'){
                            	@me='<a href="[field:arcurl/]" target="_blank" class="jiezhi">活动截至</a>';
                            }else{
                            	@me='<a href="[field:arcurl/]" target="_blank">立即报名</a>';
                            }
                        [/field:zhuangtai]
                    </dd>
                </dl>
            </li>