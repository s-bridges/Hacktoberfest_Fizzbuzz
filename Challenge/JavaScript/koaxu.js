// https://github.com/koaxu
for (let i = 1; i <= 100; i++){
	if (i % 3 === 0 && i % 5 === 0){
		console.log("Spider");
	} else if (i % 3 === 0){
		console.log("Rat");
	} else if (i % 5 === 0){
		console.log("Ghost");
	} else {
		console.log(i);
	}
}
