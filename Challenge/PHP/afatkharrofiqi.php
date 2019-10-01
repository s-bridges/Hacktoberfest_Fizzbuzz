<?php 

# init variable
$times = 100;

for($i = 1; $i <= $times; $i++){
    if($i % 3 == 0 ){
        if($i % 5 == 0){
            echo "Spider"."</br>";
        }
        else {
            echo "Rat"."</br>";
        }
    }elseif($i % 5 == 0){
        echo "Ghost"."</br>";
    }else{
        echo $i."</br>";
    }
}