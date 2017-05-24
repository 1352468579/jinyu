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
$z[8]=Array("description","",1067,1088);
$z[9]=Array("description","",1138,1159);
$z[10]=Array("id","",1246,1257);
$z[11]=Array("litpic","",1434,1450);
$z[12]=Array("writer","",2302,2318);
$z[13]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",2365,3048);
$z[13][4]['runphp']="yes";
$z[14]=Array("description","",3171,3192);
$z[15]=Array("id","",4302,4313);
$z[16]=Array("id","",4452,4463);

?>