#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    int i;
    for(i=n/2;i>=1;i++){
        if(n%i ==0){
            cout<<i<<"  "<<endl;
            break;
        }
        
    }
    
}
