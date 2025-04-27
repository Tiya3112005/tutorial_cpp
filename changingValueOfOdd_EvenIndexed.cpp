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
        if(i%2!=0)
            arr[i]=2*arr[i];
        else
            arr[i]=10*arr[i];
        cout<<arr[i]<<" ";
    }
}
    
