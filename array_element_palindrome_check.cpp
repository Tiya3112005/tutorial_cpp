#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS OF THE ARRAY:";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    int flag=0;
    for(int i=0;(i<=n/2 && n!=0);i++){
        if(arr[i]!=arr[n-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"ITS NOT A PALINDROME";
    }else
         cout<<"ITS A PALINDROME";
    return 0;
}//incomplete
