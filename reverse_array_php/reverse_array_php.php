
<?php


$ar=array(1,2,3,4,5,6,7);

$br=2;
$size=sizeof($ar)-1;
$revindex=sizeof($ar);

$start_point=$br;
for($i=0;$i<=$size;$i++)
{
	$revindex--;
    
	if($revindex>=$br)
    {
    	$temp=$ar[$i];
        $ar[$i]=$ar[$start_point];
        $ar[$start_point]=$temp;
        $start_point++;
    }
}
echo "<pre>";print_r($ar);echo "</pre>";
?>