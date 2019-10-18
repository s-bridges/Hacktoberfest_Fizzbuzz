<?php
//https://github.com/RehmatFalcon/Hacktoberfest_Fizzbuzz
foreach(range(1,100) as $i)
{
    echo ($i % 15 == 0 ? 'Spider' : ($i % 3 == 0 ? 'Rat' : ($i % 5 == 0 ? 'Ghost' : $i))) . "<br/>";
}

