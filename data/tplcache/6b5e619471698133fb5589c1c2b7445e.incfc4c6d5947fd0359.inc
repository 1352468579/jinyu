<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",527,538);
$z[5]=Array("id","",813,824);
$z[6]=Array("id","",864,875);
$z[7]=Array("id","",880,911);
$z[7][4]['function']="zan(@me)";
$z[8]=Array("click","",1038,1053);
$z[9]=Array("description","",1303,1324);
$z[10]=Array("description","",1374,1395);
$z[11]=Array("id","",1482,1493);
$z[12]=Array("litpic","",1670,1686);
$z[13]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2536,3457);
$z[13][4]['runphp']="yes";
$z[14]=Array("say","",3597,3610);
$z[15]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3768,4923);
$z[15][4]['runphp']="yes";
$z[16]=Array("id","",5142,5153);
$z[17]=Array("id","",5205,5216);
$z[18]=Array("id","",5465,5476);
$z[19]=Array("id","",5690,5701);
$z[20]=Array("id","",5930,5941);
$z[21]=Array("id","",6001,6012);
$z[22]=Array("id","",6193,6204);
$z[23]=Array("id","",6343,6354);

?>