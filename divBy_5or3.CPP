#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER A NUMBER: "<<endl;
    cin>>num;
    cout<<endl;
    if((num%5==0)||(num%3==0)){
        cout<<num<<" IS DIVISIBLE BY 5 OR 3."<<endl;
    } 
    if(num%5==0){
        cout<<num<<" IS DIVISIBLE BY 5."<<endl;
    }else if(num%3==0){
        cout<<num<<" IS DIVISIBLE BY 3."<<endl;
    }else
        cout<<"NOT DIVISIBLE BY BOTH 5 & 3"<<endl;
}
