#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER A NUMBER: "<<endl;
    cin>>num;
    cout<<endl;
    if((num%5==0)&&(num%3==0)){
        cout<<num<<" IS DIVISIBLE BY 5 AND 3."<<endl;
    }else{
        cout<<num<<" IS NOT DIVISIBLE BY BOTH 5 AND 3."<<endl;
    }
}
