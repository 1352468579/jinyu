[field:array runphp='yes']
                        
                        if(@me['source']=='1')
                        {
                        @me = '
                        <div class="newslist_count">
                        <h2><a href="'.@me[arcurl].'">'.@me[title].'</a></h2>
                        <div class="clear"></div>
                        <ul>
                        '.@me[id].'
                        <li><a href=""><img src="http://photocdn.sohu.com/recom/20170315/128881326_450_300_0.png"></a></li>
                        </ul>
                        <div class="clear"></div>
                        <div class="news_info">时间：2017-03-15 &nbsp;&nbsp; 阅读：7859</div>
                        </div>'; 
                        
                        }else{
                        
                        @me=@me['title'];
                        
                        }
                        
                        [/field:array]