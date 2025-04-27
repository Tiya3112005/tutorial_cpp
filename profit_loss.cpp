#include<iostream>
using namespace std;
int main(){
    float cp,sp,pr,ls;
    cout<<"ENTER THE COST PRICE OF THE ITEM: ";
    cin>>cp;
    cout<<"ENTER THE SELLING PRICE OF THE ITEM: ";
    cin>>sp;
    pr=((sp-cp)/cp)*100;
    ls=((cp-sp)/cp)*100;
    if(cp==sp){
        cout<<"THE SELLER HAS MADE NO PROFIT AND NO LOSS. "<<endl;
    }else if(cp<sp){
        cout<<"THE SELLER HAS MADE PROFIT AND THE PROFIT IS: "<<pr<<" %"<<endl;
    }else
        cout<<"THE SELLER HAS INCURRED LOSS AND THE LOSS IS: "<<ls<<" %"<<endl;
}
