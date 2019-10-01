for ($num=1; $num<101; $num=$num+1){
  if ($num%15==0){
    print "spider\n"
  }elsif ($num%3==0){
    print "rat\n"
  }elsif ($num%5==0){
    print "ghost\n"
  }else {print "$num\n"
  }
}
