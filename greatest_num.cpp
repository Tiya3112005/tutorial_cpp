#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER THE FIRST NUMBER:";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER:";
    cin>>b;
    cout<<"ENTER THE THIRD NUMBER:";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" IS THE GREATEST NUMBER."<<endl;
    }else if(b>c){
        cout<<b<<" IS THE GREATEST NUMBER."<<endl;
    }else
        cout<<c<<" IS THE GREATEST NUMBER."<<endl;
}
