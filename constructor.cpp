#include<iostream>
using namespace std;
class Car{
    public:
        string name;
        double price;
        int seat_no;
        Car(string n,double p,int s_no){//parameterized constructor
            name=n;
            price=p;
            seat_no=s_no;
        }
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<"   "<<c.seat_no<<" "<<endl;
}
int main(){
    Car c1("Maruti",1300000,4);//calling the constructor
    /*c2.name="Maruti";
    c2.price=2000000;
    c2.seat_no=4;*/
    //cout<<"CAR'S NAME IS: "<<c1.name<<" PRICE IS: "<<c1.price<<" SEAT NUMBER IS: "<<c1.seat_no<<endl;
    //cout<<"CAR'S NAME IS: "<<c2.name<<" PRICE IS: "<<c2.price<<" SEAT NUMBER IS: "<<c2.seat_no<<endl;
    print(c1);
    //print(c2);
}
