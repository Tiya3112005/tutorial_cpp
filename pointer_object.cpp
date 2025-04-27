#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        int age;
    Cricketer(string name,int age){
        this->name=name;
        this->age=age;
    }
    void print(){
    cout<<this->name<<" "<<this->age<<" "<<endl;
    }
};
int main(){
    Cricketer c1("Rohit Sharma",40);
    Cricketer c2("Virat Kohli",38);
    /*cout<<c1.name<<"    "<<c1.age<<endl;
    cout<<c2.name<<"    "<<c2.age<<endl;
    
    c1.print();
    c2.print();*/
    Cricketer* p1=&c1;
    cout<<p1->age<<endl;
}
