#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"ENTER THE COEFFICIENT OF X-AXIS: ";
    cin>>x;
    cout<<"ENTER THE COEFFICIENT OF Y-AXIS: ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"THE POINT "<<x<<","<<y<<" IS AT ORIGIN";
    }else if(x>0 && y>0){
        cout<<"THE POINT "<<x<<","<<y<<" IS AT 1ST QUADRANT";
    }else if(x<0 && y>0){
        cout<<"THE POINT "<<x<<","<<y<<" IS AT 2ND QUADRANT";
    }else if(x<0 && y<0){
        cout<<"THE POINT "<<x<<","<<y<<" IS AT 3RD QUADRANT";
    }else
        cout<<"THE POINT "<<x<<","<<y<<" IS AT 4TH QUADRANT";
}
