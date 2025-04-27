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
    int pdt=1;
    cout<<"PRODUCT OF ALL THE ELEMENTS IS:";
    for(int i=0;i<=5;i++){
        pdt*=arr[i];
    }
    cout<<pdt;
}
