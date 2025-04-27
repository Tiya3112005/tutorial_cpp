#include<iostream>
using namespace std;
int factorial(int a){
    int fact =1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int x,int y){
    return factorial(x)/(factorial(y)*factorial(x-y));
}
int main(){
    int n;
    cout<<"ENTER THE TERMS: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

