#include<bits/stdc++.h>
using namespace std;

int main()
{
  for(int i=1;i<=1000;i++)
  {
    if(i%15==0)
    cout<<"Spider"<<endl;
    
    else if(i%3==0)
    cout<<"Rat"<<endl;
    
    else if(i%5==0)
    cout<<"Ghost"<<endl;
    
    else cout<<i<<endl;
  }
  return 0;
}
