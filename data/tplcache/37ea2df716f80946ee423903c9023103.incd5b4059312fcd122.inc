<?php
$z[0]=Array("global","",28,53);
$z[0][4]['name']="autoindex";
$z[1]=Array("id","",115,126);
$z[2]=Array("imgss","",270,285);
$z[3]=Array("id","",424,435);
$z[4]=Array("id","",545,556);
$z[5]=Array("id","",571,582);
$z[6]=Array("id","",620,631);
$z[7]=Array("global","",665,690);
$z[7][4]['name']="autoindex";
$z[8]=Array("id","",765,776);
$z[9]=Array("id","",883,894);
$z[10]=Array("id","",950,961);
$z[11]=Array("id","",1269,1280);
$z[12]=Array("id","",1320,1331);
$z[13]=Array("id","",1336,1367);
$z[13][4]['function']="zan(@me)";
$z[14]=Array("click","",1494,1509);
$z[15]=Array("description","",1759,1780);
$z[16]=Array("description","",1830,1851);
$z[17]=Array("id","",1938,1949);
$z[18]=Array("litpic","",2126,2142);
$z[19]=Array("mid","\r\n                            	\$name=@me;\r\n                                \$sql=\"select * from dede_member where mid =\$name\";\r\n                                \$query = mysql_query(\$sql);\r\n                                \$row = mysql_fetch_array(\$query);\r\n                                \$userids=\$row['userid'];\r\n                                if(\$row['face'] == ''){\r\n                                \r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"/member/templets/images/dfboy.png\" width=\"35\" /></a>'; \r\n                                }else{ \r\n                                \$face = \$row['face'];\r\n                                @me = '<a href=\"/member/index.php?uid='.\$userids.'\" target=\"_blank\"><img src=\"'.\$face.'\" width=\"35\" height=\"35\" /></a>'; \r\n                                }\r\n                            ",2992,3913);
$z[19][4]['runphp']="yes";
$z[20]=Array("say","",4053,4066);
$z[21]=Array("id","\r\n                              \$aids=@me;\r\n                              \$sql=\"SELECT f.username,f.msg,m.face,m.userid FROM dede_feedback as f LEFT JOIN dede_member as m ON f.mid=m.mid where f.aid=\$aids order by f.id desc limit 1\";  \r\n                              \$query = mysql_query(\$sql);\r\n                              \$row = mysql_fetch_array(\$query);\r\n                              if(\$row['face'] == ''){\r\n                                  \$face = '<img src=\"/member/templets/images/dfboy.png\" />'; \r\n                              }else{ \r\n                                  \$face = '<img src='.\$row['face'].' />'; \r\n                              }\r\n                              if(\$row[username]==''){@me='';}else{\r\n                              @me = '<div class=\"comment convo clearfix\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"img x\">'.\$face.'</a><div class=\"content\"><a href=\"/member/index.php?uid='.\$row['userid'].'\" target=\"_blank\" class=\"author\">'.\$row['username'].'</a>:&nbsp;'.\$row['msg'].'</div></div>';\r\n                              }\r\n                              ",4224,5379);
$z[21][4]['runphp']="yes";
$z[22]=Array("id","",5598,5609);
$z[23]=Array("id","",5661,5672);
$z[24]=Array("id","",5921,5932);
$z[25]=Array("id","",6146,6157);
$z[26]=Array("id","",6386,6397);
$z[27]=Array("id","",6457,6468);
$z[28]=Array("id","",6649,6660);
$z[29]=Array("id","",6799,6810);

?>