#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%==0)
		cout<<"Rat"<<endl;
		else if(i%5==0)
		cout<<"Ghost"<<endl;
		else if(i%3==0 && i%5==0)
		cout<<"Spider";
		else cout<<i<<endl;
	}
}