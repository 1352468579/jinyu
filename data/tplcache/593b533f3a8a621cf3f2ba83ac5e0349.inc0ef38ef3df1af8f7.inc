<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("arcurl","",143,158);
$z[2]=Array("litpic","",214,230);
$z[3]=Array("title","",237,251);
$z[4]=Array("writer","",499,515);
$z[5]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",562,1245);
$z[5][4]['runphp']="yes";
$z[6]=Array("description","",1368,1389);
$z[7]=Array("id","",1664,1675);
$z[8]=Array("id","",1677,1708);
$z[8][4]['function']="zan(@me)";
$z[9]=Array("description","",1987,2008);
$z[10]=Array("id","",2069,2080);
$z[11]=Array("litpic","",2179,2195);

?>