#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER A NUMBER: ";
    cin>>num;
    cout<<endl;
    if(num>=0){
        cout<<"ABSOLUTE VALUE OF "<<num<<" IS "<<num<<endl;
    }else{
        cout<<"ABSOLUTE VALUE OF "<<num<<" IS "<<-num<<endl;
    }
}
