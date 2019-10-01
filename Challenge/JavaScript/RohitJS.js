var i
for(i=1 ; i<=100 ; i++){
  (i%15==0) ? console.log('Spider') : (i%3==0) ? console.log('Rat') : (i%5==0) ? console.log('Ghost') : console.log(i)
}
