#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<"THE FACTORIAL OF "<<i<<" IS: "<<fact<<endl;
    }
}
