#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0)
        return 1;
    return (a * power(a,b-1));
}

int main(){
    int a,b;
    cout<<"ENTER BASE VALUE:";
    cin>>a;
    cout<<"ENTER POWER:";
    cin>>b;
    cout<<power(a,b);
}
