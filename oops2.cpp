#include<iostream>
using namespace std;
class Student{
    private:
        string email_id;
    public:
        string name;
        int roll_no;
        string department;
        int year;
        string batch;
        void newDept(string dept){
            department=dept;
        }
        void changeBatch(string btch){
            batch=btch;
        }
        void setEmail_id(string e_id){
            email_id=e_id;
        }
        string getEmail_id(){
            return email_id;
        }
};
int main(){
    Student s1;
    Student s2;
    s1.name="TIYA";
    s1.roll_no=61;
    s1.year=2;
    s1.batch="Y";
    s1.changeBatch("X");
    s1.setEmail_id("ghoshtiya428@gmail.com");
    s1.getEmail_id();
    cout<<s1.name<<"       "<<s1.roll_no<<"     "<<s1.year<<"      "<<s1.batch<<"   "<<s1.getEmail_id()<<endl;
    
    
    
    
}
