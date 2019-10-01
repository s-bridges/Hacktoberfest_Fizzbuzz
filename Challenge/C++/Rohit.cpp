#include<iostream>
using namespace std;
int main()
{
    for(int i=1 ; i<=100 ; i++)
    {
        if( i%3==0 && i%5==0)
        cout<<"Spider\n";
        else if( i%3==0 )
        cout<<"Rat\n";
        else if( i%5==0)
        cout<<"Ghost\n";
        else
        cout<<i<<"\n";
    }
}
