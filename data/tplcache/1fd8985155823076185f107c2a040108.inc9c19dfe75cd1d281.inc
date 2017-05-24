<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("arcurl","",167,182);
$z[2]=Array("img","",238,251);
$z[3]=Array("title","",258,272);
$z[4]=Array("id","",574,585);
$z[5]=Array("id","",625,636);
$z[6]=Array("id","",641,672);
$z[6][4]['function']="zan(@me)";
$z[7]=Array("click","",799,814);
$z[8]=Array("description","",1064,1085);
$z[9]=Array("description","",1135,1156);
$z[10]=Array("id","",1243,1254);
$z[11]=Array("litpic","",1431,1447);
$z[12]=Array("writer","",2299,2315);
$z[13]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",2362,3045);
$z[13][4]['runphp']="yes";
$z[14]=Array("description","",3168,3189);
$z[15]=Array("id","",4301,4312);
$z[16]=Array("id","",4453,4464);

?>