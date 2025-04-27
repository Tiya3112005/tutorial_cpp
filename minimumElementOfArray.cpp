#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout<<"ENTER ELEMENTS OF THE ARRAY:";
    for(int i=0;i<=5;i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<"ELEMENTS ARE:";
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    int min=arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"MINIMUM ELEMENT IS: "<<min;
    
}
