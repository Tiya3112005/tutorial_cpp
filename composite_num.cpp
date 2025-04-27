#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    int i;
    bool flag=true;
    for(i=2;i<n/2;i++){
        if(n%i ==0){
            flag=false;
            break;
        }
    }
    if(n==1)
        cout<<"NEITHER PRIME NOR COMPOSITE";
    else if(flag==false)
        cout<<"COMPOSITE NUMBER";
    else
        cout<<"PRIME NUMBER";
    
}
