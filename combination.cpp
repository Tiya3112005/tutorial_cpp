#include<iostream>
using namespace std;
int factorial(int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    cout<<"ENTER THE VALUE OF r:";
    cin>>r;
    int a,b,c;
    a=factorial(n);
    b=factorial(r);
    c=factorial(n-r);
    /*for(int i=1;i<=n;i++){
        a=a*i;
        
    }
    int b=1;
    for(int i=1;i<=r;i++){
        b=b*i;
        
    }
    int c=1;
    for(int i=1;i<=n-r;i++){
        c=c*i;
        
    }*/
    /*cout<<"THE FACTORIAL OF "<<n<<" IS: "<<a<<endl;
    cout<<"THE FACTORIAL OF "<<r<<" IS: "<<b<<endl;
    cout<<"THE FACTORIAL OF "<<n-r<<" IS: "<<c<<endl;*/
    cout<<"Calculted combination is:"<<a/(b*c)<<endl;
    
   return 0; 
}
