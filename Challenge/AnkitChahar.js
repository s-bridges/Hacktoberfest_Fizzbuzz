for(var x = 1; x <= 100; x++)
{
    if(x % 15 == 0)
    {
	console.log("Spider")
    }
    else if(x % 5 == 0)
    {
 	console.log("Ghost")
    }
    else if(x % 3 == 0)
    {
	console.log("Rat")
    }
    else
    {
	console.log(x)
    }
}
