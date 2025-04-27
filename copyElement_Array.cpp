#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    int arr[n],b[n];
    cout<<"ENTER ELEMENTS OF THE ARRAY:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    for(int i=0;i<n;i++){
        int j=(n-1-i);
        b[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    
}
