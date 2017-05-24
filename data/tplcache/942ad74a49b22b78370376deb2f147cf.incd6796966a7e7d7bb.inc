<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("arcurl","",167,182);
$z[2]=Array("litpic","",238,254);
$z[3]=Array("title","",261,275);
$z[4]=Array("id","",577,588);
$z[5]=Array("id","",628,639);
$z[6]=Array("id","",644,675);
$z[6][4]['function']="zan(@me)";
$z[7]=Array("click","",802,817);
$z[8]=Array("description","",1128,1149);
$z[9]=Array("id","",1210,1221);
$z[10]=Array("litpic","",1320,1336);
$z[11]=Array("writer","",1818,1834);
$z[12]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",1881,2564);
$z[12][4]['runphp']="yes";
$z[13]=Array("description","",2687,2708);

?>