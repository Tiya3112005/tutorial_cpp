#include<iostream>
using namespace std;
class Car{
    public:
        string name;
        double price;
        int seat_no;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<"   "<<c.seat_no<<" "<<endl;
}
int main(){
    Car c1,c2;
    c1.name="Honda";
    c1.price=1300000;
    c1.seat_no=6;
    c2.name="Maruti";
    c2.price=2000000;
    c2.seat_no=4;
    //cout<<"CAR'S NAME IS: "<<c1.name<<" PRICE IS: "<<c1.price<<" SEAT NUMBER IS: "<<c1.seat_no<<endl;
    //cout<<"CAR'S NAME IS: "<<c2.name<<" PRICE IS: "<<c2.price<<" SEAT NUMBER IS: "<<c2.seat_no<<endl;
    print(c1);
    print(c2);
}
