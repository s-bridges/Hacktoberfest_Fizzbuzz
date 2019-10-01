#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=100;i++)
{
i%15==0?cout<<"Spider\n":i%5==0?cout<<"Ghost\n":i%3==0?cout<<"Rat\n":cout<<i<<"\n";
}
return 0;
}
