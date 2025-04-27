#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        Teacher(){
            department="CSBS";
        }
        string name;
        string department;
        string subject;
        void changedept(string newdept){
            department=newdept;
        }
        void setSalary(double s){//setter function:-used to set values in private members
            salary=s;
        }
        double getSalary(){//getter function
            return salary;
        }
};
int main(){
    Teacher t1;
    Teacher t2;
    Teacher t3;
    t1.name="AMITRAJIT";
    //t1.department="ECE";
    //t1.salary=60000;
    t1.setSalary(60000);
    
    t1.subject="C++";
    cout<<t1.name<<"    "<<t1.department<<"     "<<t1.getSalary()<<"     "<<endl;
    t1.changedept("CSE");
    cout<<t1.name<<"    "<<t1.department<<"     "<<t1.getSalary()<<"     "<<endl;
}

