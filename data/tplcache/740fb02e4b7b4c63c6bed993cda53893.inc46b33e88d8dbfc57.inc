<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",526,537);
$z[5]=Array("id","",552,563);
$z[6]=Array("id","",601,612);
$z[7]=Array("global","",646,671);
$z[7][4]['name']="autoindex";
$z[8]=Array("id","",746,757);
$z[9]=Array("id","",864,875);
$z[10]=Array("id","",931,942);
$z[11]=Array("id","",1250,1261);
$z[12]=Array("id","",1301,1312);
$z[13]=Array("id","",1317,1348);
$z[13][4]['function']="zan(@me)";
$z[14]=Array("click","",1475,1490);
$z[15]=Array("description","",1740,1761);
$z[16]=Array("description","",1811,1832);
$z[17]=Array("id","",1919,1930);
$z[18]=Array("litpic","",2107,2123);
$z[19]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2973,3894);
$z[19][4]['runphp']="yes";
$z[20]=Array("say","",4034,4047);
$z[21]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4205,5360);
$z[21][4]['runphp']="yes";
$z[22]=Array("id","",5579,5590);
$z[23]=Array("id","",5642,5653);
$z[24]=Array("id","",5902,5913);
$z[25]=Array("id","",6127,6138);
$z[26]=Array("id","",6367,6378);
$z[27]=Array("id","",6438,6449);
$z[28]=Array("id","",6630,6641);
$z[29]=Array("id","",6780,6791);

?>