<?php
$z[0]=Array("sql","\r\n                        <li>\r\n                        <a href=\"/member/index.php?uid=[field:userid/]\" target=\"_blank\" class=\"hd_bm_list_img\">\r\n                        [field:face runphp='yes']\r\n                        	\$face1=@me;\r\n                        	if(\$face1 == ''){\r\n                            	@me='<img src=\"/member/templets/images/dfboy.png\" />';\r\n                            }else{\r\n                            	@me='<img src='.\$face1.' />'; \r\n                            }\r\n                        [/field:face]\r\n                        </a>\r\n                        <a href=\"/member/index.php?uid=[field:userid/]\" class=\"hd_bm_list_name\">[field:uname/]</a>\r\n                        <p><span>于[field:shijian/]报名了活动。</span><br /><a href=\"/a/huodong/[field:aid/].html\" class=\"hd_bm_list_tt\">[field:huodong/]</a></p>\r\n                        </li>\r\n                        ",332,1442);
$z[0][4]['sql']="select d.userid,d.aid,d.shijian,d.huodong,m.face,m.uname from dede_diyform1 as d left join dede_member m on d.userid=m.userid where d.userid!='' and d.shijian!='' and d.huodong!=''";
$z[1]=Array("sql","\r\n                        <li><a href=\"/member/index.php?uid=[field:userid/]\" class=\"hd_bm_list_img\"><img src=\"[field:face/]\" alt=\"[field:uname/]\" /></a><a href=\"/member/index.php?uid=[field:userid/]\" class=\"hd_bm_list_name\">[field:uname/]</a><p><span>[field:birthday/]岁 | [field:height/]CM | [field:city/]</span></p><p><a href=\"/member/pm.php?dopost=send&uid=[field:userid/]\">打招呼</a><a href=\"/member/index.php?action=newfriend&uid=[field:userid/]\">关注他</a></p></li>\r\n                        ",1706,2491);
$z[1][4]['sql']="select m.mid,m.userid,m.uname,m.sex,m.face,p.birthday,p.city,p.height from dede_member as m left join dede_member_person p on m.mid=p.mid where m.uname!='' and p.birthday!='' and p.city!='' and m.face!='' and p.height!='' ORDER BY rand() DESC LIMIT 0,5";

?>