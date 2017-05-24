<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("id","",596,607);
$z[6]=Array("id","",1062,1073);
$z[7]=Array("id","",1113,1124);
$z[8]=Array("id","",1129,1160);
$z[8][4]['function']="zan(@me)";
$z[9]=Array("click","",1287,1302);
$z[10]=Array("description","",1552,1573);
$z[11]=Array("description","",1623,1644);
$z[12]=Array("id","",1731,1742);
$z[13]=Array("litpic","",1919,1935);
$z[14]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2785,3706);
$z[14][4]['runphp']="yes";
$z[15]=Array("say","",3846,3859);
$z[16]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4017,5172);
$z[16][4]['runphp']="yes";
$z[17]=Array("id","",5391,5402);
$z[18]=Array("id","",5454,5465);
$z[19]=Array("id","",5714,5725);
$z[20]=Array("id","",5939,5950);
$z[21]=Array("id","",6179,6190);
$z[22]=Array("id","",6250,6261);
$z[23]=Array("id","",6442,6453);
$z[24]=Array("id","",6592,6603);

?>