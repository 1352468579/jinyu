<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("arcurl","",405,420);
$z[4]=Array("id","",786,797);
$z[5]=Array("id","",837,848);
$z[6]=Array("id","",853,884);
$z[6][4]['function']="zan(@me)";
$z[7]=Array("click","",1011,1026);
$z[8]=Array("description","",1276,1297);
$z[9]=Array("description","",1347,1368);
$z[10]=Array("id","",1455,1466);
$z[11]=Array("litpic","",1643,1659);
$z[12]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2509,3430);
$z[12][4]['runphp']="yes";
$z[13]=Array("say","",3570,3583);
$z[14]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3741,4896);
$z[14][4]['runphp']="yes";
$z[15]=Array("id","",5115,5126);
$z[16]=Array("id","",5178,5189);
$z[17]=Array("id","",5438,5449);
$z[18]=Array("id","",5663,5674);
$z[19]=Array("id","",5903,5914);
$z[20]=Array("id","",5974,5985);
$z[21]=Array("id","",6168,6179);
$z[22]=Array("id","",6318,6329);

?>