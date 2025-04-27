#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"ENTER ELEMENTS OF THE ARRAY:";
    for(int i=0;i<=5;i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<"ELEMENTS ARE:";
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"REVERSED ELEMENTS ARE:";
    for(int i=5;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
}
