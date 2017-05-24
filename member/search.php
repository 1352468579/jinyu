<?php
/**
 * 搜索
 * 
 * @version        $Id: search.php 1 8:38 2010年7月9日Z tianya $
 * @package        DedeCMS.Member
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__).'/config.php');
require_once(DEDEINC.'/enums.func.php');
require_once(DEDEINC.'/datalistcp.class.php');
$menutype = 'mydede';

//检查用户是否被禁言
CheckNotAllow();

$addsqls = array();
$province = empty($province) ? 0 : intval($province);
$minage = empty($minage) ? 0 : intval($minage);
$maxage = empty($maxage) ? 0 : intval($maxage);
if(empty($city)) $city = '';
if(empty($sex)) $sex = '';
if(empty($keyword)) $keyword = '';

$keyword = FilterSearch(stripslashes($keyword));
$keyword = addslashes(cn_substr($keyword,20));

if(!empty($keyword)) {
    $addsqls[] = " (mb.userid like '%$keyword%' Or mb.uname like '%$keyword%') ";
}


if($city!='') $addsqls[] = " mp.city = '$city' ";
if($sex!='') $addsqls[] = " mb.sex = '$sex' ";
if($minage!=0) $addsqls[] = " mp.birthday>='$minage' ";
if($maxage!=0) $addsqls[] = " mp.birthday<='$maxage' ";

$addsqls_str = join(' And ',$addsqls);
if($addsqls_str!='') {
    $addsqls_str = ' And '.$addsqls_str;
}

$addsql = " WHERE mb.spacesta > -1  ".$addsqls_str;

$query = "SELECT mb.mid,mb.userid,mb.uname,mb.face,mb.sex,mp.place,mp.birthday,mp.birthday,mp.height,mp.city FROM `dede_member` mb
LEFT JOIN `dede_member_person` mp ON mp.mid = mb.mid
{$addsql} ORDER BY mb.logintime DESC";
$dlist = new DataListCP();
$dlist->pageSize = 24;
$dlist->SetParameter('keyword',$keyword);
$dlist->SetParameter('province',$province);
$dlist->SetParameter('city',$city);
$dlist->SetParameter('minage',$minage);
$dlist->SetParameter('maxage',$maxage);
$dlist->SetParameter('sex',$sex);
$dlist->SetTemplate(DEDEMEMBER.'/templets/search.htm');
$dlist->SetSource($query);
$dlist->Display();