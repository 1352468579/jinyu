<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("arcurl","",220,235);
$z[3]=Array("imgss","",291,306);
$z[4]=Array("title","",313,327);
$z[5]=Array("id","",641,652);
$z[6]=Array("id","",692,703);
$z[7]=Array("id","",708,739);
$z[7][4]['function']="zan(@me)";
$z[8]=Array("click","",866,881);
$z[9]=Array("description","",1131,1152);
$z[10]=Array("description","",1202,1223);
$z[11]=Array("id","",1310,1321);
$z[12]=Array("litpic","",1498,1514);
$z[13]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2364,3285);
$z[13][4]['runphp']="yes";
$z[14]=Array("say","",3425,3438);
$z[15]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",3596,4751);
$z[15][4]['runphp']="yes";
$z[16]=Array("id","",4970,4981);
$z[17]=Array("id","",5033,5044);
$z[18]=Array("id","",5293,5304);
$z[19]=Array("id","",5518,5529);
$z[20]=Array("id","",5758,5769);
$z[21]=Array("id","",5815,5826);
$z[22]=Array("id","",6009,6020);
$z[23]=Array("id","",6159,6170);

?>