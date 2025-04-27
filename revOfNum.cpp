#include<iostream>
using namespace std;
int main(){
    int n,ld,rev=0,sum=0;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    for(int i=n;i>0;i=i/10){
    ld=i%10;
    sum+=ld;
    rev=(rev*10)+ld;
    }
    cout<<"REVERSE OF THE NUMBER IS: "<<rev<<endl;
    cout<<"THE SUM OF DIGIT OF THE NUMBER IS: "<<sum<<endl;
    
}
