//https://github.com/TharinduMD

#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=100;i++){
		if(i%3 == 0){
			if(i%5 ==0){
				cout<<"Spider"<<endl;
			}else
				cout<<"Rat"<<endl;
		}
		else if(i%5 == 0){
			cout<<"Ghost"<<endl;
		}else{
			cout<<i<<endl;
		}
	}
	return 0;
}