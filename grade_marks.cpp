#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"ENTER THE THE MARKS OF THE STUDENT:";
    cin>>marks;
    if(marks>80 && marks<=100){
        cout<<"RESULT IS VERY GOOD";
    }else if(marks>60 && marks<=80){
        cout<<"RESULT IS GOOD";
    }else if(marks>40 && marks<=60){
        cout<<"RESULT IS AVERAGE";
    }else if(marks>0 && marks<=40){
        cout<<"FAIL";
    }else
        cout<<"INVALID MARKS";
        
        
}
