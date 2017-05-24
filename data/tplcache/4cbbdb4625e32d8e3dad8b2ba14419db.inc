[field:array runphp='yes']

if(@me['source']=='1')
{
@me = '<div class="newslist_count">
                    	<h2><a href="">【独家】圈定了2亿海外年轻用户的 Musical.ly，要回国加入短视频大战了</a></h2>
                        <div class="clear"></div>
                        <ul>
                        	<li><a href=""><img src="http://photocdn.sohu.com/recom/20170315/128881326_450_300_0.png"></a></li>
                        	<li><a href=""><img src="http://photocdn.sohu.com/recom/20170315/128881326_450_300_2.jpeg"></a></li>
                        	<li><a href=""><img src="http://photocdn.sohu.com/recom/20170315/128881326_450_300_1.jpeg"></a></li>
                        </ul>
                        <div class="clear"></div>
                        <div class="news_info">时间：2017-03-15 &nbsp;&nbsp; 阅读：7859</div>
                    </div>'; 

}else{

@me=@me['title'];

}

[/field:array]