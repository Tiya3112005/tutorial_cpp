#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int m,n;
    cout<<"ENTER FIRST NUMBER:";
    cin>>m;
    cout<<"ENTER SECOND NUMBER:";
    cin>>n;
    cout<<sum(m,n);
    
    return 0;
}
