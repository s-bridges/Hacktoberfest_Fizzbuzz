for(i in 1:100){
  if(i %% 3 == 0){
    if(i %% 5 == 0){
      print("Spider")
    }else{
      print("Rat")
    }
  }else if(i %% 5 == 0){
    print("Ghost")
  }else{
    print(i)
  }
}
