<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",527,538);
$z[5]=Array("id","",553,564);
$z[6]=Array("id","",842,853);
$z[7]=Array("id","",893,904);
$z[8]=Array("id","",909,940);
$z[8][4]['function']="zan(@me)";
$z[9]=Array("click","",1067,1082);
$z[10]=Array("description","",1332,1353);
$z[11]=Array("description","",1403,1424);
$z[12]=Array("id","",1511,1522);
$z[13]=Array("litpic","",1699,1715);
$z[14]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2565,3486);
$z[14][4]['runphp']="yes";
$z[15]=Array("say","",3626,3639);
$z[16]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3797,4952);
$z[16][4]['runphp']="yes";
$z[17]=Array("id","",5171,5182);
$z[18]=Array("id","",5234,5245);
$z[19]=Array("id","",5494,5505);
$z[20]=Array("id","",5719,5730);
$z[21]=Array("id","",5959,5970);
$z[22]=Array("id","",6030,6041);
$z[23]=Array("id","",6222,6233);
$z[24]=Array("id","",6372,6383);

?>