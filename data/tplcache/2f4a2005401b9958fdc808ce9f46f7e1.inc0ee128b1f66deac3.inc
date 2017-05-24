<?php
$z[0]=Array("global","",29,54);
$z[0][4]['name']="autoindex";
$z[1]=Array("arcurl","",145,160);
$z[2]=Array("imgss","",216,231);
$z[3]=Array("title","",238,252);
$z[4]=Array("writer","",501,517);
$z[5]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",564,1247);
$z[5][4]['runphp']="yes";
$z[6]=Array("say","",1371,1384);

?>