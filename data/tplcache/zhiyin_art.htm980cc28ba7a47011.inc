<?php
$z[0]=Array("field","",254,276);
$z[0][4]['name']="typename";
$z[1]=Array("include","",691,728);
$z[1][4]['filename']="header.htm";
$z[2]=Array("field","",828,851);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",952,975);
$z[3][4]['name']="seotitle";
$z[4]=Array("field","",1039,1061);
$z[4][4]['name']="typename";
$z[5]=Array("field","",1109,1134);
$z[5][4]['name']="description";
$z[6]=Array("field","",1786,1811);
$z[6][4]['name']="temparticle";
$z[7]=Array("field","",1818,1840);
$z[7][4]['name']="typename";
$z[8]=Array("field","",1938,1959);
$z[8][4]['name']="content";
$z[9]=Array("sql","\r\n                    \r\n                	<li><div class=\"hn_list_img\"><a href=\"javascript:;\" onclick=\"cdpopuptrigger([field:id/])\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /><p class=\"hn_list_p\"><b>[field:title/]</b><br />[field:zhiwei/]/[field:jingyan/]经验</p></a><a href=\"/call.html\" target=\"_blank\" class=\"hn_zxbtn\" title=\"在线咨询红娘\">咨询红娘</a></div>\r\n                    <div class=\"cd-popup2 tanchu[field:id/]\">\r\n                        <div class=\"cd-popup-container2\">\r\n                            <div class=\"cd-buttons2\">\r\n                                <div class=\"tc_img\">\r\n                                    <div class=\"hn_list_img2\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></div>\r\n                                    <b>[field:title/]</b><br /><span>[field:zhiwei/]/[field:jingyan/]经验</span>\r\n                                    <div class=\"tc_zx\"><a href=\"[field:arcurl/]\" target=\"_blank\">查看详情</a><a href=\"/call.html\" target=\"_blank\" class=\"hover\">在线咨询</a></div>\r\n                                </div>\r\n                                <div class=\"tc_text\">\r\n                                    <p><b>好评率：[field:haoping/] 成功案例：[field:anli/]</b>[field:jieshao/]</p>\r\n                                    <p><b>服务理念</b>[field:linian/]</p>\r\n                                </div>\r\n                            </div>\r\n                            <a href=\"javascript:;\" onclick=\"cdpopupclose([field:id/])\" class=\"cd-popup-close2\">close</a>\r\n                        </div>\r\n                    </div>\r\n                    </li>\r\n                    \r\n                    ",2335,4299);
$z[9][4]['sql']="select ar.id,ar.title,ar.litpic,ad.aid,ad.jingyan,ad.zhiwei,ad.jieshao,ad.linian,ad.haoping,ad.anli from dede_arctype a left join dede_addon17 ad on a.typename=ad.gongsi left join dede_archives ar on ad.aid=ar.id where ad.gongsi=~typename~ ORDER BY `ad`.`aid` ASC LIMIT 0,30";
$z[10]=Array("field","",4808,4830);
$z[10][4]['name']="content1";
$z[11]=Array("field","",6492,6514);
$z[11][4]['name']="namerule";
$z[12]=Array("field","",6755,6778);
$z[12][4]['name']="namerule2";
$z[13]=Array("field","",6999,7021);
$z[13][4]['name']="typename";
$z[14]=Array("field","",7632,7655);
$z[14][4]['name']="namerule2";
$z[15]=Array("include","",8322,8359);
$z[15][4]['filename']="footer.htm";

?>