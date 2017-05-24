<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("id","",196,207);
$z[3]=Array("imgss","",296,311);
$z[4]=Array("id","",450,461);
$z[5]=Array("id","",554,565);
$z[6]=Array("id","",580,591);
$z[7]=Array("id","",629,640);
$z[8]=Array("id","",677,688);
$z[9]=Array("id","",1008,1019);
$z[10]=Array("id","",1059,1070);
$z[11]=Array("id","",1075,1106);
$z[11][4]['function']="zan(@me)";
$z[12]=Array("click","",1233,1248);
$z[13]=Array("description","",1498,1519);
$z[14]=Array("description","",1569,1590);
$z[15]=Array("id","",1677,1688);
$z[16]=Array("litpic","",1865,1881);
$z[17]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2731,3652);
$z[17][4]['runphp']="yes";
$z[18]=Array("say","",3792,3805);
$z[19]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3963,5118);
$z[19][4]['runphp']="yes";
$z[20]=Array("id","",5337,5348);
$z[21]=Array("id","",5400,5411);
$z[22]=Array("id","",5660,5671);
$z[23]=Array("id","",5885,5896);
$z[24]=Array("id","",6125,6136);
$z[25]=Array("id","",6196,6207);
$z[26]=Array("id","",6388,6399);
$z[27]=Array("id","",6538,6549);

?>