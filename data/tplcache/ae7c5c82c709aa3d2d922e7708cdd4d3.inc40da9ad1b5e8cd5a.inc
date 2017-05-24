<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("id","",629,640);
$z[6]=Array("id","",985,996);
$z[7]=Array("id","",1036,1047);
$z[8]=Array("id","",1052,1083);
$z[8][4]['function']="zan(@me)";
$z[9]=Array("click","",1210,1225);
$z[10]=Array("description","",1475,1496);
$z[11]=Array("description","",1546,1567);
$z[12]=Array("id","",1654,1665);
$z[13]=Array("litpic","",1842,1858);
$z[14]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2708,3629);
$z[14][4]['runphp']="yes";
$z[15]=Array("say","",3769,3782);
$z[16]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3940,5095);
$z[16][4]['runphp']="yes";
$z[17]=Array("id","",5314,5325);
$z[18]=Array("id","",5377,5388);
$z[19]=Array("id","",5637,5648);
$z[20]=Array("id","",5862,5873);
$z[21]=Array("id","",6102,6113);
$z[22]=Array("id","",6173,6184);
$z[23]=Array("id","",6365,6376);
$z[24]=Array("id","",6515,6526);

?>