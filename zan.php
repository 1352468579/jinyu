<?php
require_once (dirname(__FILE__) . "/include/common.inc.php");
function getip()
{
    $ip=false;
    if(!empty($_SERVER["HTTP_CLIENT_IP"])){
        $ip = $_SERVER["HTTP_CLIENT_IP"];
    }
    if (!empty($_SERVER['HTTP_X_FORWARDED_FOR'])) {
        $ips = explode (", ", $_SERVER['HTTP_X_FORWARDED_FOR']);
        if ($ip) { array_unshift($ips, $ip); $ip = FALSE; }
        for ($i = 0; $i < count($ips); $i++) {
            if (!eregi ("^(10│172.16│192.168).", $ips[$i])) {
                $ip = $ips[$i];
                break;
            }
        }
    }
    return ($ip ? $ip : $_SERVER['REMOTE_ADDR']);
}

$ip =getip(); //获取用户IP 
$id = $_POST['id']; 
if(!isset($id) || empty($id)) exit; 
 
//查询已赞过的IP
$dsql->SetQuery("SELECT ip FROM dede_zan  WHERE aid='".$id."' and ip='$ip'");
$dsql->Execute();
$count = $dsql->GetTotalRow();
 
if($count==0){ //如果没有记录 
 
    $dsql->ExecuteNoneQuery("update dede_archives set zan=zan+1 where id='$id'; ");//写入赞数
    
    $dsql->ExecuteNoneQuery("insert into dede_zan (aid,ip) values ('$id','$ip'); ");//写入IP,及被赞的AID 
 
    $rows = $dsql->GetOne("Select zan  from dede_archives where id='".$id."'");//获取被赞的数量
    $zan = $rows['zan']; //获取赞数值 
    echo "<i>".$zan."</i>"; 
}else{ 
    echo "<i>赞过了..</i>";
}

?>