#include<iostream>
using namespace std;
int main(){
    int num1,ld,pdt=1;
    cout<<"ENTER A NUMBER: ";
    cin>>num1;
    for(int i=num1;i>0;i=i/10){
        ld=i%10;
        pdt=pdt*ld;
    }
    cout<<"PRODUCT OF THE DIGITS ARE: "<<pdt<<endl;
    
}
