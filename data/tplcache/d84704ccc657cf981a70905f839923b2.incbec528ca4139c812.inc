<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("arcurl","",167,182);
$z[2]=Array("imgss","",238,253);
$z[3]=Array("title","",260,274);
$z[4]=Array("id","",576,587);
$z[5]=Array("id","",627,638);
$z[6]=Array("id","",643,674);
$z[6][4]['function']="zan(@me)";
$z[7]=Array("click","",801,816);
$z[8]=Array("description","",1066,1087);
$z[9]=Array("description","",1137,1158);
$z[10]=Array("id","",1245,1256);
$z[11]=Array("litpic","",1433,1449);
$z[12]=Array("writer","",2301,2317);
$z[13]=Array("writer","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where userid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                if(\$row['face'] == ''){\r\n                                    @me = '<img src=\"/member/templets/images/dfboy.png\" width=\"35\" />'; \r\n                                }else{ \r\n                                    \$face = \$row['face']; @me = '<img src=\"'.\$face.'\" width=\"35\" height=\"35\" />'; \r\n                                }\r\n                            ",2364,3047);
$z[13][4]['runphp']="yes";
$z[14]=Array("say","",3170,3183);
$z[15]=Array("id","",4457,4468);
$z[16]=Array("id","",4691,4702);
$z[17]=Array("id","",4942,4953);
$z[18]=Array("id","",4966,4977);

?>