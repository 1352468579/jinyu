[field:mid function='GetMemberInfos("face",@me)' runphp='yes']
                    $rows=@me;
                    if($rows==''){
                    	@me='1';
                    }else{
                    	@me='2';
                    }
                    [/field:mid]