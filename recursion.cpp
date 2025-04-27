#include<iostream>
using namespace std;
void print(int x){
    if(x==0)
        return;
    cout<<x<<endl;
    print(x-1);
}
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    print(n);
}
