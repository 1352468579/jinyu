[field:mid function='GetMemberInfos("face",@me)' runphp='yes']
                    $rows=@me;
                    if($rows==''){
                    	@me='/templets/images/dfboy.png';
                    }else{
                    	@me=@me;
                    }
                    [/field:mid]