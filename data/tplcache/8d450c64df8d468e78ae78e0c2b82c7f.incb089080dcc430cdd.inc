<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("arcurl","",143,158);
$z[2]=Array("litpic","",214,230);
$z[3]=Array("title","",237,251);
$z[4]=Array("writer","",499,515);
$z[5]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '作者头像：<img src=\"'.\$face.'\" />'; \r\n                                }\r\n                            ",742,1406);
$z[5][4]['runphp']="yes";

?>