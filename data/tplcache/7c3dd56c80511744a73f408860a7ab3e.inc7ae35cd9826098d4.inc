<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("id","",629,640);
$z[6]=Array("id","",694,705);
$z[7]=Array("id","",1000,1011);
$z[8]=Array("id","",1051,1062);
$z[9]=Array("id","",1067,1098);
$z[9][4]['function']="zan(@me)";
$z[10]=Array("click","",1225,1240);
$z[11]=Array("description","",1490,1511);
$z[12]=Array("description","",1561,1582);
$z[13]=Array("id","",1669,1680);
$z[14]=Array("litpic","",1857,1873);
$z[15]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2723,3644);
$z[15][4]['runphp']="yes";
$z[16]=Array("say","",3784,3797);
$z[17]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3955,5110);
$z[17][4]['runphp']="yes";
$z[18]=Array("id","",5329,5340);
$z[19]=Array("id","",5392,5403);
$z[20]=Array("id","",5652,5663);
$z[21]=Array("id","",5877,5888);
$z[22]=Array("id","",6117,6128);
$z[23]=Array("id","",6188,6199);
$z[24]=Array("id","",6380,6391);
$z[25]=Array("id","",6530,6541);

?>