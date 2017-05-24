<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("arcurl","",220,235);
$z[3]=Array("imgss","",291,306);
$z[4]=Array("title","",313,327);
$z[5]=Array("id","",641,652);
$z[6]=Array("id","",692,703);
$z[7]=Array("id","",708,739);
$z[7][4]['function']="zan(@me)";
$z[8]=Array("click","",866,881);
$z[9]=Array("description","",1131,1152);
$z[10]=Array("description","",1202,1223);
$z[11]=Array("id","",1310,1321);
$z[12]=Array("litpic","",1498,1514);
$z[13]=Array("writer","",2366,2382);
$z[14]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",2429,3112);
$z[14][4]['runphp']="yes";
$z[15]=Array("say","",3235,3248);
$z[16]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['username'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['username'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3406,4556);
$z[16][4]['runphp']="yes";
$z[17]=Array("id","",5039,5050);
$z[18]=Array("id","",5264,5275);
$z[19]=Array("id","",5518,5529);

?>