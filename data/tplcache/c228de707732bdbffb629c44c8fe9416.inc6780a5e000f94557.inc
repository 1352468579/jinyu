<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("id","",595,606);
$z[6]=Array("id","",1060,1071);
$z[7]=Array("id","",1111,1122);
$z[8]=Array("id","",1127,1158);
$z[8][4]['function']="zan(@me)";
$z[9]=Array("click","",1285,1300);
$z[10]=Array("description","",1550,1571);
$z[11]=Array("description","",1621,1642);
$z[12]=Array("id","",1729,1740);
$z[13]=Array("litpic","",1917,1933);
$z[14]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2783,3704);
$z[14][4]['runphp']="yes";
$z[15]=Array("say","",3844,3857);
$z[16]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4015,5170);
$z[16][4]['runphp']="yes";
$z[17]=Array("id","",5389,5400);
$z[18]=Array("id","",5452,5463);
$z[19]=Array("id","",5712,5723);
$z[20]=Array("id","",5937,5948);
$z[21]=Array("id","",6177,6188);
$z[22]=Array("id","",6248,6259);
$z[23]=Array("id","",6440,6451);
$z[24]=Array("id","",6590,6601);

?>