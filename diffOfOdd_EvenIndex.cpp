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
    int esum=0,osum=0,diff=0;
    for(int i=0;i<=5;i++){
        if(i%2==0)
            esum+=arr[i];
        else
            osum+=arr[i];
    }
    diff=esum-osum;
    cout<<"THE CALCULATED DIFFERENCE IS:"<<diff;
}

