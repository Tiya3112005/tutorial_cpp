#include<iostream>
using namespace std;
int main(){
    /*SUM OF 1 TO n TERMS:-
    int n,sum=0;
    cout<<"ENTER THE NO. OF TERMS:";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"THE SUM OF 1 TO "<<n<<" IS: "<<sum<<endl;*/
    int n,fact=1;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    for(int i=n;i>0;i--){
        fact=fact*i;
        
    }
    cout<<"THE FACTORIAL OF "<<n<<" IS: "<<fact<<endl;
    
    
}
