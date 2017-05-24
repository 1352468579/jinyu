<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",533,544);
$z[5]=Array("id","",559,570);
$z[6]=Array("id","",608,619);
$z[7]=Array("global","",653,678);
$z[7][4]['name']="autoindex";
$z[8]=Array("id","",753,764);
$z[9]=Array("id","",871,882);
$z[10]=Array("id","",938,949);
$z[11]=Array("id","",1257,1268);
$z[12]=Array("id","",1308,1319);
$z[13]=Array("id","",1324,1355);
$z[13][4]['function']="zan(@me)";
$z[14]=Array("click","",1482,1497);
$z[15]=Array("description","",1747,1768);
$z[16]=Array("description","",1818,1839);
$z[17]=Array("id","",1926,1937);
$z[18]=Array("litpic","",2114,2130);
$z[19]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2980,3901);
$z[19][4]['runphp']="yes";
$z[20]=Array("say","",4041,4054);
$z[21]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4212,5367);
$z[21][4]['runphp']="yes";
$z[22]=Array("id","",5586,5597);
$z[23]=Array("id","",5649,5660);
$z[24]=Array("id","",5909,5920);
$z[25]=Array("id","",6134,6145);
$z[26]=Array("id","",6374,6385);
$z[27]=Array("id","",6445,6456);
$z[28]=Array("id","",6637,6648);
$z[29]=Array("id","",6787,6798);

?>