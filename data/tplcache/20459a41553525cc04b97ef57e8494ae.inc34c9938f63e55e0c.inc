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
$z[7]=Array("description","",1015,1036);
$z[8]=Array("id","",1097,1108);
$z[9]=Array("litpic","",1207,1223);
$z[10]=Array("writer","",1705,1721);
$z[11]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",1768,2451);
$z[11][4]['runphp']="yes";
$z[12]=Array("description","",2574,2595);

?>