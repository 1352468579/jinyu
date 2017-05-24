<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>我的小说书目列表</title>
<link href="../member/templets/style/base.css" rel="stylesheet" type="text/css" />
<script language="javascript" type="text/javascript" src="../images/js/j.js"></script>
<script language="javascript" type="text/javascript" src="../member/templets/js/table_function.js"></script>
<script language="javascript" type="text/javascript" src="js/main.js"></script>
<script language="javascript" type="text/javascript" src="js/story.js"></script>
</head>
<body>
  <?php include(DEDEMEMBER."../templets/head.htm"); ?>
<div id="main">
  <div id="content" class="w1000 clearfix">
    <?php include(DEDEMEMBER."./templets/menu.php"); ?>
    <div id="mcpmain">
      <div id="appTab">
        <ul>
          <li class="thisTab"><a href="mybooks.php"><span>小说书目</span></a></li>
          <li><a href="story_list_content.php"><span>小说内容</span></a></li>
          <li><a href="story_stow.php"><span>我的收藏夹</span></a></li>
        </ul>
      </div>
      <div id="mainCp">
        <form name="form2" class="mL10 mR10 mTB10">
          <table cellspacing="1" class="list" width="100%">
            <thead>
              <tr>
                <th >小说名称</th>
                <th width="10%">隶属栏目 </th>
                <th width="10%">创建时间 </th>
                <th width="10%">管理</th>
              </tr>
            </thead>
            <tbody>
            
            <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
            <tr>
              <td><input type='hidden' name='ids[]' value='<?php  echo $row['bid'];  ?>' />
                <?php
						echo "<a href='../book/book.php?bid={$fields['id']}' target='_blank'>".$fields['bookname']."</a>";
						if($fields['booktype']!=1) echo " (小说内容:{$fields['postnum']})";
						else echo " (漫画内容:{$fields['postnum']})";
				?></td>
              <td align="center"><?php echo $fields['classname']; ?></td>
              <td align="center"><?php echo GetDateMk($fields['senddate']); ?></td>
              <td align="center"><?php  if($fields['booktype']!=1){ ?>
                <a href='story_add_content.php?bookid=<?php echo $fields['id']; ?>'>添加</a> |
                <?php }else{ ?>
                <a href='story_add_photo.php?bookid=<?php echo $fields['id']; ?>'>添加</a> |
                <?php }  if($cfg_book_ifcheck != '是' || $fields['ischeck'] ==0 ){ ?>
                <a href="story_edit.php?bookid=<?php echo $fields['id'];?>">修改</a> |
                <?php } ?>
                <a href='story_list_content.php?bookid=<?php echo $fields['id']; ?>'>内容</a> | <a href='story_list_chapter.php?bookid=<?php echo $fields['id']; ?>'>章节</a> | <a href='javascript:DelStory(<?php echo $fields['id']; ?>)'>删除</a></td>
            </tr>
            <?php
}
}?>
            </tbody>
            
            <tfoot>
              <tr>
                <td colspan="6"><div class="pages mTB10 fRight"><?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
</div>
                  <div class="clear"></div></td>
              </tr>
            </tfoot>
          </table>
        </form>
        </div>
        <!--主操作区域 -->
      </div>
 <div class="clear"></div>
    </div>
  </div>
<?php include(DEDEMEMBER."./templets/foot.htm"); ?>
</div>
</body>
</html>