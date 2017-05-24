<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("id","",698,709);
$z[6]=Array("id","",814,825);
$z[7]=Array("id","",878,889);
$z[8]=Array("id","",1196,1207);
$z[9]=Array("id","",1247,1258);
$z[10]=Array("id","",1263,1294);
$z[10][4]['function']="zan(@me)";
$z[11]=Array("click","",1421,1436);
$z[12]=Array("description","",1686,1707);
$z[13]=Array("description","",1757,1778);
$z[14]=Array("id","",1865,1876);
$z[15]=Array("litpic","",2053,2069);
$z[16]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2919,3840);
$z[16][4]['runphp']="yes";
$z[17]=Array("say","",3980,3993);
$z[18]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4151,5306);
$z[18][4]['runphp']="yes";
$z[19]=Array("id","",5525,5536);
$z[20]=Array("id","",5588,5599);
$z[21]=Array("id","",5848,5859);
$z[22]=Array("id","",6073,6084);
$z[23]=Array("id","",6313,6324);
$z[24]=Array("id","",6384,6395);
$z[25]=Array("id","",6576,6587);
$z[26]=Array("id","",6726,6737);

?>