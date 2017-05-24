<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",94,105);
$z[2]=Array("arcurl","",199,214);
$z[3]=Array("imgss","",270,285);
$z[4]=Array("title","",292,306);
$z[5]=Array("id","",608,619);
$z[6]=Array("id","",659,670);
$z[7]=Array("id","",675,706);
$z[7][4]['function']="zan(@me)";
$z[8]=Array("click","",833,848);
$z[9]=Array("description","",1098,1119);
$z[10]=Array("description","",1169,1190);
$z[11]=Array("id","",1277,1288);
$z[12]=Array("litpic","",1465,1481);
$z[13]=Array("writer","",2333,2349);
$z[14]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",2396,3079);
$z[14][4]['runphp']="yes";
$z[15]=Array("say","",3202,3215);
$z[16]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(@me==''){@me='asd';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['username'].'\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['username'].'\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              \r\n                              ",3373,4515);
$z[16][4]['runphp']="yes";
$z[17]=Array("id","",4998,5009);
$z[18]=Array("id","",5223,5234);
$z[19]=Array("id","",5477,5488);

?>