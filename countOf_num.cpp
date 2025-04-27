#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"ENTER A NUMBER:";
    cin>>num;
    while(num!=0){
        num/=10;
        count++;
    }
    cout<<"THE DIGIT OF THE NUMBER IS: "<<count<<endl;
}
