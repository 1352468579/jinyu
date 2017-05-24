<!DOCTYPE HTML>
<html>
<head>
<meta charset="utf-8">
<title>图片上传</title>
<link rel="stylesheet" type="text/css" href="/images/css/up.css" />
<style type="text/css">
.demo{width:780px; margin:40px auto 0 auto; min-height:150px; text-align:center}
.preview{width:55px; height:55px;border:solid 1px #dedede; margin:5px;padding:5px;}
.demo p{line-height:26px; text-align:center}
.btn{position: relative;overflow: hidden;margin-right: 4px;display:inline-block;*display:inline;padding:5px 25px 5px;font-size:14px;line-height:18px;*line-height:20px;color:#fff;text-align:center;vertical-align:middle;cursor:pointer;background-color:#5bb75b;border:1px solid #cccccc;border-color:#e6e6e6 #e6e6e6 #bfbfbf;border-bottom-color:#b3b3b3;-webkit-border-radius:4px;-moz-border-radius:4px;border-radius:4px;}
.btn input {position: absolute;top: 0; right: 0;margin: 0;border: solid transparent;opacity: 0;filter:alpha(opacity=0); cursor: pointer;}

.demo button{position: relative;overflow: hidden;margin-right: 4px;display:inline-block;*display:inline;padding:4px 10px 4px;font-size:14px;line-height:18px;*line-height:20px;color:#fff;text-align:center;vertical-align:middle;cursor:pointer;background-color:#5bb75b;border:1px solid #cccccc;border-color:#e6e6e6 #e6e6e6 #bfbfbf;border-bottom-color:#b3b3b3;-webkit-border-radius:4px;-moz-border-radius:4px;border-radius:4px;}
</style>
<script type="text/javascript" src="/images/js/jquery-1.7.2.min.js"></script>
<script type="text/javascript" src="/images/js/jquery.wallform.js"></script>
<script type="text/javascript">
$(function(){
	$('#photoimg').die('click').live('change', function(){
		var status = $("#up_status");
		var btn = $("#up_btn");
		$("#imageform").ajaxForm({
			target: '#preview', 
			beforeSubmit:function(){
				status.show();
				btn.hide();
			}, 
			success:function(){
				status.hide();
				btn.show();
			}, 
			error:function(){
				status.hide();
				btn.show();
		} }).submit();
	});
});
function nullLink()
{
	return;
}

function ReturnValue(reimg)
{
    if(window.opener.document.form1.imgss != null)
	{
		 window.opener.document.form1.imgss.value=reimg;
	}
	 
    var funcNum = 1;
	if(window.opener.CKEDITOR != null && funcNum != 1)
	{
		
		window.opener.CKEDITOR.tools.callFunction(funcNum, reimg);
		
	}
	window.close();
}
</script>
</head>

<body>

<div id="main">
   <div class="demo">
        <form id="imageform" method="post" enctype="multipart/form-data" action="select_imgs_post.php">
			<div id="up_status" style="display:none"><img src="/images/loader.gif" alt="uploading"/></div>
			<div id="up_btn" class="btn">
				<span>添加图片</span>
				<input id="photoimg" type="file" name="photoimg">
			</div>
		</form>
        <p>最大上传500KB，支持jpg，gif，png格式。</p>
		<div id="preview"></div>
        <button onClick="overupload()">上传完成</button>
   </div>
</div>
<div id="valueimgsrc" style="display:none"></div>
<script>
function overupload(){
	var listImg=document.getElementById("preview").getElementsByTagName("img");
	for(var i=0;i<listImg.length;i++)
	{
		var path=listImg[i].src;
		var filename;
		if(path.indexOf("/")>0)//如果包含有"/"号 从最后一个"/"号+1的位置开始截取字符串
		{
			filename=path.substring(path.lastIndexOf("/")+1,path.length);
		}
		else
		{
			filename=path;
		}
		document.getElementById('valueimgsrc').innerHTML+=filename+"|";
	}
	ReturnValue(document.getElementById('valueimgsrc').innerHTML);
}
</script> 
</body>
</html>