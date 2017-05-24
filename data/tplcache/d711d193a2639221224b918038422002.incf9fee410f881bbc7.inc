<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",539,550);
$z[5]=Array("id","",565,576);
$z[6]=Array("id","",614,625);
$z[7]=Array("global","",659,684);
$z[7][4]['name']="autoindex";
$z[8]=Array("id","",759,770);
$z[9]=Array("id","",877,888);
$z[10]=Array("id","",944,955);
$z[11]=Array("id","",1263,1274);
$z[12]=Array("id","",1314,1325);
$z[13]=Array("id","",1330,1361);
$z[13][4]['function']="zan(@me)";
$z[14]=Array("click","",1488,1503);
$z[15]=Array("description","",1753,1774);
$z[16]=Array("description","",1824,1845);
$z[17]=Array("id","",1932,1943);
$z[18]=Array("litpic","",2120,2136);
$z[19]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2986,3907);
$z[19][4]['runphp']="yes";
$z[20]=Array("say","",4047,4060);
$z[21]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4218,5373);
$z[21][4]['runphp']="yes";
$z[22]=Array("id","",5592,5603);
$z[23]=Array("id","",5655,5666);
$z[24]=Array("id","",5915,5926);
$z[25]=Array("id","",6140,6151);
$z[26]=Array("id","",6380,6391);
$z[27]=Array("id","",6451,6462);
$z[28]=Array("id","",6643,6654);
$z[29]=Array("id","",6793,6804);

?>