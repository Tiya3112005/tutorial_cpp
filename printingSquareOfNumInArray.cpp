#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"ENTER ELEMENTS OF THE ARRAY:";
    for(int i=1;i<=n;i*n){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<"ELEMENTS ARE:";
    for(int i=0;i<=n;i*n){
        cout<<arr[i]<<" ";
    }
}
//incomplete
