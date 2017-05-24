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
$z[7]=Array("id","",1634,1645);
$z[8]=Array("id","",1685,1696);
$z[9]=Array("id","",1698,1729);
$z[9][4]['function']="zan(@me)";
$z[10]=Array("description","",2008,2029);
$z[11]=Array("id","",2090,2101);
$z[12]=Array("litpic","",2200,2216);

?>