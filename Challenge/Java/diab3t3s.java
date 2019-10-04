//https://github.com/diab3t3s
public class diab3t3s{
    public void static main(){
	for (int i = 0; i <= 100; i++){
	    if (i % 3 == 0 && i % 5 == 0)
		System.out.println("Spider");
	    else  if (i % 3 == 0)
		System.out.println("Rat");
	    else  if (i % 5 == 0)
		System.out.println("Ghost");
	    else
		System.out.println(i);
	}
    }
}