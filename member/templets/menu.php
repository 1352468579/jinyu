    <?php
        $add_channel_menu = array();
        //如果为游客访问，不启用左侧菜单
        if(!empty($cfg_ml->M_ID))
        {
            $channelInfos = array();
            $dsql->Execute('addmod',"SELECT id,nid,typename,useraddcon,usermancon,issend,issystem,usertype,isshow FROM `#@__channeltype` ");	
            while($menurow = $dsql->GetArray('addmod'))
            {
                $channelInfos[$menurow['nid']] = $menurow;
                //禁用的模型
                if($menurow['isshow']==0)
                {
                    continue;
                }
                //其它情况
                if($menurow['issend']!=1 || $menurow['issystem']==1 
                || ( !preg_match("#".$cfg_ml->M_MbType."#", $menurow['usertype']) && trim($menurow['usertype'])!='' ) )
                {
                    continue;
                }
                $menurow['ddcon'] = empty($menurow['useraddcon']) ? 'archives_add.php' : $menurow['useraddcon'];
                $menurow['list'] = empty($menurow['usermancon']) ? 'content_list.php' : $menurow['usermancon'];
                $add_channel_menu[] = $menurow;
            }
            unset($menurow);
		?>
    <div id="mcpsub">
    	<?php         /** 查询会员状态 **/
        $moodmsg = $dsql->GetOne("SELECT * FROM #@__member_msg WHERE mid='{$cfg_ml->M_ID}' ORDER BY dtime desc");
        /** 调用访客记录 **/
        $_vars['mid'] = $cfg_ml->M_ID;
        
        if(empty($cfg_ml->fields['face']))
        {
            $cfg_ml->fields['face']=($cfg_ml->fields['sex']=='女')? 'templets/images/dfgirl.png' : 'templets/images/dfboy.png';
        }
		?>
    	<div class="menu_tx"><a href="<?php echo $cfg_cmsurl;?>/member/index.php?uid=<?php echo $cfg_ml->M_LoginID; ?>" target="_blank"><img src="<?php echo $cfg_ml->fields['face']; ?>" width="80" height="80" alt="您的形象"/></a></div>
    	<div class="menu_name">
		<p><?php echo $cfg_ml->M_UserName; ?></p>
		<?php 
		if($cfg_ml->M_Rank=='20'){
			echo "<img src='/member/templets/images/v.png' title='已实名认证' width='18'/>";
		}else if($cfg_ml->M_Rank=='10'){
			echo "<span><a href='edit_shiming.php'>立即认证</a></span>";
		}
		?>
        <div class="menu_qm">
       		<?php
             if(is_array($moodmsg)){
            ?>
            <?php echo $moodmsg['msg'];?>
            <?php
              } else {
            ?>
             还没有个性签名，你也太懒了吧[<a href="/member/edit_fullinfo.php">更改</a>]
             <?php
             }
             ?>
        </div>
        
        </div>
        
        <div class="clear"></div>
        
      <div class="topGr"></div>
      <div id="menuBody">
          <ul id="menuFirst">
            <li><a href="/member" title="会员中心" ><span>会员中心</span></a></li>
            <li <?php echo ($menutype_son == 'mf')? 'class="thisApp"' : "" ;?>><a href="../member/myfriend.php" title="我的好友"><span>我的好友</span></a></li>
            <li><a href="../member/edit_shiming.php" title="我的好友"><span>实名认证</span></a></li>
	        <li><a href="../member/edit_fullinfo.php">个人资料</a></li>
	        <li><a href="../member/edit_face.php">头像设置</a></li>
            <li><a href="../member/content_list.php?channelid=19" title="已发布的文章">微圈子</a><a href="../member/article_add.php" class="act" title="发表新文章">发表</a></li>
            <li <?php echo ($menutype_son == 'pm')? 'class="thisApp"' : "" ;?>><a href="../member/pm.php" title="短消息"><span>短消息</span></a></li>
            <li <?php echo ($menutype_son == 'buy')? 'class="thisApp"' : "" ;?>><a href="../member/buy.php" title="消费中心"><span>充值中心</span></a></li>
        	<li><a href="../member/mystow.php">我的收藏夹</a></li>
          </ul>
        
      </div>
      <div class="buttomGr"></div>
    </div>
    <?php
    }
    ?>
    <!--左侧操作菜单项 -->