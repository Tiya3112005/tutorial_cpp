#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER A NUMBER: "<<endl;
    cin>>num;
    cout<<endl;
    (num%2==0)?cout<<num<<" IS AN EVEN NUMBER."<<endl:cout<<num<<" IS NOT AN EVEN NUMBER."<<endl;
}
