#include <iostream>
using namespace std;

int main ()
{
   /* local variable Initialization */   
   int n = 1,times=100;

   /* for loops execution */   
   for( n = 1; n <= times; n = n + 1 )
   {
	   	if(n % 3 == 0 )
	    {
	    	if(n % 5 == 0){
	    		cout << "Spider"<<endl;
			}
			else {
				cout << "Rat"<<endl;
			}
	    }else if(n % 5 == 0){
	        cout << "Ghost"<<endl;
	    }
	    else
	    {
	        cout << n <<endl;
	    }
   }
   return 0;
}