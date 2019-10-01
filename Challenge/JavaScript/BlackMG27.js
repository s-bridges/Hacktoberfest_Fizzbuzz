for (var i = 1; i <= 100; i++) {
    (i % 15 == 0) ?
    console.log('Spider'): (i % 5 == 0) ?
        console.log('Ghost') :
        (i % 3 == 0) ?
        console.log('Rat') :
        console.log(i);
}