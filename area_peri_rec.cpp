#include<iostream>
using namespace std;
int main(){
    float l,b,area,peri;
    cout<<"ENTER THE LENGTH:";
    cin>>l;
    cout<<endl;
    cout<<"ENTER THE BREADTH:";
    cin>>b;
    cout<<endl;
    area=l*b;
    cout<<"THE AREA OF THE RECTANGLE IS: "<<area<<endl;
    peri=2*(l+b);
    cout<<"THE PERIMETER OF THE RECTANGLE IS: "<<peri<<endl;
    if(area>peri){
        cout<<"AREA OF THE RECTANGLE IS GREATER THAN PERIMETER OF THE RECTANGLE."<<endl;
    }else
        cout<<"AREA OF THE RECTANGLE IS NOT GREATER THAN PERIMETER OF THE RECTANGLE."<<endl;
}
