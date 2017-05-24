<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",298,313);
$z[3]=Array("arcurl","",433,448);
$z[4]=Array("id","",814,825);
$z[5]=Array("id","",865,876);
$z[6]=Array("id","",881,912);
$z[6][4]['function']="zan(@me)";
$z[7]=Array("click","",1039,1054);
$z[8]=Array("description","",1304,1325);
$z[9]=Array("description","",1375,1396);
$z[10]=Array("id","",1483,1494);
$z[11]=Array("litpic","",1671,1687);
$z[12]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2537,3458);
$z[12][4]['runphp']="yes";
$z[13]=Array("say","",3598,3611);
$z[14]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3769,4924);
$z[14][4]['runphp']="yes";
$z[15]=Array("id","",5143,5154);
$z[16]=Array("id","",5206,5217);
$z[17]=Array("id","",5466,5477);
$z[18]=Array("id","",5691,5702);
$z[19]=Array("id","",5931,5942);
$z[20]=Array("id","",6002,6013);
$z[21]=Array("id","",6196,6207);
$z[22]=Array("id","",6346,6357);

?>