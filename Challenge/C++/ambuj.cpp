#include<iostream>
using namespace std;
bool checkPrime(int x){
    if(x==1){
        return false;
    }
    else{
        for(int i=2;i<=x/2;i++){
            if(x%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int M,N;
    cin>>M>>N;
    cout<<"Primes are: ";
    for(int i=M;i<=N;i++){
        if(checkPrime(i)){
            cout<<i<<"\t";
        }
    }
    cout<<"\n";
}
