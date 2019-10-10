// https://github.com/hexangel616
console.log([...Array(100)].map((n,i)=>{i++;return(i%15?'':'Spider')||(i%5?'':'Ghost')||(i%3?'':'Rat')||i;}).join('\n'));