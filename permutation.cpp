#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
   return fact;
}
int main(){
    int n,r;
    cout<<"ENTER THE VALUE OF n: ";
    cin>>n;
    cout<<"ENTER THE VALUE OF r: ";
    cin>>r;
    int a,b;
    a=factorial(n);
    b=factorial(n-r);
    cout<<"CALCULATED PERMUTATION IS: "<<(a/b)<<endl;
    return 0;
}
