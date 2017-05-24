<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",526,537);
$z[5]=Array("id","",552,563);
$z[6]=Array("id","",841,852);
$z[7]=Array("id","",892,903);
$z[8]=Array("id","",908,939);
$z[8][4]['function']="zan(@me)";
$z[9]=Array("click","",1066,1081);
$z[10]=Array("description","",1331,1352);
$z[11]=Array("description","",1402,1423);
$z[12]=Array("id","",1510,1521);
$z[13]=Array("litpic","",1698,1714);
$z[14]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2564,3485);
$z[14][4]['runphp']="yes";
$z[15]=Array("say","",3625,3638);
$z[16]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3796,4951);
$z[16][4]['runphp']="yes";
$z[17]=Array("id","",5170,5181);
$z[18]=Array("id","",5233,5244);
$z[19]=Array("id","",5493,5504);
$z[20]=Array("id","",5718,5729);
$z[21]=Array("id","",5958,5969);
$z[22]=Array("id","",6029,6040);
$z[23]=Array("id","",6221,6232);
$z[24]=Array("id","",6371,6382);

?>