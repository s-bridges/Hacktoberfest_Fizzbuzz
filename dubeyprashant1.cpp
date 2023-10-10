#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(i%15==0){
            cout<<"spider"<<endl;
            continue;
        }
        if(i%3==0){
            cout<<"rat"<<endl;
            continue;
        }
        if(i%5==0){
            cout<<"ghost"<<endl;
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
