<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("global","",642,667);
$z[5][4]['name']="autoindex";
$z[6]=Array("id","",740,751);
$z[7]=Array("id","",856,867);
$z[8]=Array("id","",920,931);
$z[9]=Array("id","",1238,1249);
$z[10]=Array("id","",1289,1300);
$z[11]=Array("id","",1305,1336);
$z[11][4]['function']="zan(@me)";
$z[12]=Array("click","",1463,1478);
$z[13]=Array("description","",1728,1749);
$z[14]=Array("description","",1799,1820);
$z[15]=Array("id","",1907,1918);
$z[16]=Array("litpic","",2095,2111);
$z[17]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2961,3882);
$z[17][4]['runphp']="yes";
$z[18]=Array("say","",4022,4035);
$z[19]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4193,5348);
$z[19][4]['runphp']="yes";
$z[20]=Array("id","",5567,5578);
$z[21]=Array("id","",5630,5641);
$z[22]=Array("id","",5890,5901);
$z[23]=Array("id","",6115,6126);
$z[24]=Array("id","",6355,6366);
$z[25]=Array("id","",6426,6437);
$z[26]=Array("id","",6618,6629);
$z[27]=Array("id","",6768,6779);

?>