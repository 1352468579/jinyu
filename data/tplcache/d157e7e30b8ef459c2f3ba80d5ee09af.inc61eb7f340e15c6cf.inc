<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("global","",643,668);
$z[5][4]['name']="autoindex";
$z[6]=Array("id","",764,775);
$z[7]=Array("id","",884,895);
$z[8]=Array("id","",951,962);
$z[9]=Array("id","",1270,1281);
$z[10]=Array("id","",1321,1332);
$z[11]=Array("id","",1337,1368);
$z[11][4]['function']="zan(@me)";
$z[12]=Array("click","",1495,1510);
$z[13]=Array("description","",1760,1781);
$z[14]=Array("description","",1831,1852);
$z[15]=Array("id","",1939,1950);
$z[16]=Array("litpic","",2127,2143);
$z[17]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2993,3914);
$z[17][4]['runphp']="yes";
$z[18]=Array("say","",4054,4067);
$z[19]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4225,5380);
$z[19][4]['runphp']="yes";
$z[20]=Array("id","",5599,5610);
$z[21]=Array("id","",5662,5673);
$z[22]=Array("id","",5922,5933);
$z[23]=Array("id","",6147,6158);
$z[24]=Array("id","",6387,6398);
$z[25]=Array("id","",6458,6469);
$z[26]=Array("id","",6650,6661);
$z[27]=Array("id","",6800,6811);

?>