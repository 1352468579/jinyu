<?php
$z[0]=Array("include","",763,800);
$z[0][4]['filename']="header.htm";
$z[1]=Array("global","",5147,5173);
$z[1][4]['name']="cfg_cmspath";
$z[2]=Array("sql","\r\n            <li>\r\n            	<div class=\"con_vip_hidden\">\r\n                    <a href=\"/member/index.php?uid=[field:userid/]\" target=\"_blank\">\r\n                        <div class=\"con_vip_img\"><img src=\"[field:face/]\" alt=\"[field:uname/]\" /></div>\r\n                    </a>\r\n                    <div class=\"con_vip_zx\">\r\n                        <a href=\"javascript:;\" onclick=\"cdpopuptrigger2(-2,'[field:uname/]','[field:face/]')\"><span class=\"s-hi\"><i></i>发私信</span></a>\r\n                        <b>|</b>\r\n                        <a href=\"javascript:;\"><span class=\"l-wu\"><i></i>送礼物</span></a>\r\n                    </div>\r\n                </div>\r\n                <div class=\"clear\"></div>\r\n                <div class=\"con_vip_name\"><a href=\"/member/index.php?uid=[field:userid/]\" target=\"_blank\">[field:uname/]</a></div>\r\n                <div class=\"clear\"></div>\r\n                <p>\r\n                    <i>[field:birthday/]岁 | [field:height/]CM | [field:city/]</i>\r\n                </p>\r\n            </li>\r\n            ",8355,9682);
$z[2][4]['sql']="select m.mid,m.userid,m.uname,m.sex,m.face,p.birthday,p.city,p.height from dede_member as m left join dede_member_person p on m.mid=p.mid where m.uname!='' and p.birthday!='' and p.city!='' and m.face!='' and p.height!='' ORDER BY `m`.`mid` DESC LIMIT 0,18";
$z[3]=Array("global","",11317,11343);
$z[3][4]['name']="cfg_cmspath";
$z[4]=Array("arclist","\r\n            <li>\r\n                <dl>\r\n                    <dt>\r\n                        <a href=\"[field:arcurl/]\" target=\"_blank\">\r\n                        <img src=\"[field:litpic/]\" alt=\"[field:title/]\" height=\"150\" width=\"300\">\r\n                        </a>\r\n                    	[field:zhuangtai runphp='yes']\r\n                        	\$zhuangtai=@me;\r\n                            if(\$zhuangtai=='已结束'){\r\n                            	@me='<span class=\"enterStop\">报名结束</span>';\r\n                            }else{\r\n                            	@me='<span class=\"enterNow\">正在报名</span>';\r\n                            }\r\n                        [/field:zhuangtai]\r\n                    </dt>\r\n                    <dd onclick=\"window.location='[field:arcurl/]'\">\r\n                        <h4>[field:title/]</h4>\r\n                        <p class=\"picScroll-p\"><span>[field:didian/]</span><span>[field:feiyong/]</span><span>[field:baoming/]人报名</span></p>\r\n                    	[field:zhuangtai runphp='yes']\r\n                        	\$zhuangtai=@me;\r\n                            if(\$zhuangtai=='已结束'){\r\n                            	@me='<i class=\"jiezhi\">活动截至</i>';\r\n                            }else{\r\n                            	@me='<i>立即报名</i>';\r\n                            }\r\n                        [/field:zhuangtai]\r\n                    </dd>\r\n                </dl>\r\n            </li>\r\n            ",20719,22313);
$z[4][4]['titlelen']="43";
$z[4][4]['addfields']="didian,feiyong,baoming,zhuangtai";
$z[4][4]['row']="10";
$z[4][4]['orderby']="update";
$z[4][4]['typeid']="8";
$z[4][4]['channelid']="18";
$z[5]=Array("arclist","\r\n                    <li>\r\n                        <div class=\"hn_tx\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a></div>\r\n                        \r\n                        <div class=\"hn_fl\">\r\n                        <div class=\"hn_name\"><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a><i>[field:zhiwei/]</i><p>[field:linian function='cn_substr(@me,62)'/]...</p></div>\r\n                        <div class=\"clear\"></div>\r\n                        <div class=\"hn_info\">从业经验: <i>[field:jingyan /]</i><br />成功配对: <i>[field:anli/]</i></div>\r\n                        <div class=\"clear\"></div>\r\n                        <div class=\"hn_zx\"><a href=\"[field:arcurl/]\" target=\"_blank\" class=\"hn_zx1\">详细资料</a><a href=\"/call.html\" class=\"hn_zx2\" target=\"_blank\">求配对</a></div>\r\n                        </div>\r\n                    </li>\r\n                    ",23371,24445);
$z[5][4]['titlelen']="43";
$z[5][4]['addfields']="jingyan,zhiwei,anli,linian";
$z[5][4]['flag']="c";
$z[5][4]['row']="9";
$z[5][4]['orderby']="update";
$z[5][4]['typeid']="5";
$z[5][4]['channelid']="17";
$z[6]=Array("arclist","\r\n            	<a href=\"[field:arcurl/]\" target=\"_blank\">\r\n                	<img src=\"[field:litpic/]\" alt=\"[field:title/]\" />\r\n                    <p><i></i>[field:title/]</p>\r\n                    <i class=\"icon-play7070\" ></i>\r\n                </a>\r\n                ",25015,25359);
$z[6][4]['titlelen']="43";
$z[6][4]['row']="1";
$z[6][4]['orderby']="update";
$z[6][4]['typeid']="11";
$z[7]=Array("arclist","\r\n                	<li>\r\n                    	<a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\"><div class=\"hlclass_i\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></div><p>[field:title/]</p></a>\r\n                    </li>\r\n                    ",25614,25967);
$z[7][4]['titlelen']="43";
$z[7][4]['row']="6";
$z[7][4]['orderby']="update";
$z[7][4]['typeid']="6";
$z[7][4]['notypeid']="25";
$z[8]=Array("arclist","\r\n                            <li><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a></li>\r\n                            ",26599,26876);
$z[8][4]['titlelen']="43";
$z[8][4]['orderby']="id";
$z[8][4]['typeid']="26";
$z[8][4]['noflag']="h";
$z[8][4]['limit']="0,4";
$z[9]=Array("arclist","\r\n                        <a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\"><img src=\"[field:shuimg/]\" alt=\"[field:title/]\" /></a>\r\n                        ",27025,27324);
$z[9][4]['titlelen']="43";
$z[9][4]['orderby']="id";
$z[9][4]['row']="1";
$z[9][4]['typeid']="26";
$z[9][4]['limit']="0,1";
$z[9][4]['flag']="h";
$z[9][4]['addfields']="shuimg";
$z[9][4]['channelid']="1";
$z[10]=Array("arclist","\r\n                            <li><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a></li>\r\n                            ",27476,27754);
$z[10][4]['titlelen']="43";
$z[10][4]['orderby']="id";
$z[10][4]['typeid']="26";
$z[10][4]['noflag']="h";
$z[10][4]['limit']="4,2";
$z[11]=Array("arclist","\r\n                        <a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\"><img src=\"[field:shuimg/]\" alt=\"[field:title/]\" /></a>\r\n                        ",27903,28202);
$z[11][4]['titlelen']="43";
$z[11][4]['orderby']="id";
$z[11][4]['typeid']="26";
$z[11][4]['limit']="1,1";
$z[11][4]['row']="1";
$z[11][4]['flag']="h";
$z[11][4]['addfields']="shuimg";
$z[11][4]['channelid']="1";
$z[12]=Array("arclist","\r\n                            <li><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a></li>\r\n                            ",28333,28610);
$z[12][4]['titlelen']="43";
$z[12][4]['orderby']="id";
$z[12][4]['typeid']="26";
$z[12][4]['noflag']="h";
$z[12][4]['limit']="6,4";
$z[13]=Array("include","",31286,31323);
$z[13][4]['filename']="footer.htm";

?>