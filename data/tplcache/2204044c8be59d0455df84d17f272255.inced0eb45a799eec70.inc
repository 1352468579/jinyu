<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("arcurl","",143,158);
$z[2]=Array("litpic","",214,230);
$z[3]=Array("title","",237,251);
$z[4]=Array("id","",493,504);
$z[5]=Array("id","",544,555);
$z[6]=Array("id","",557,588);
$z[6][4]['function']="zan(@me)";
$z[7]=Array("description","",895,916);
$z[8]=Array("id","",977,988);
$z[9]=Array("litpic","",1087,1103);
$z[10]=Array("writer","",1585,1601);
$z[11]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",1648,2331);
$z[11][4]['runphp']="yes";
$z[12]=Array("description","",2454,2475);

?>