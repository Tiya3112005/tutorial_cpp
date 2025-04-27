#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int x;
    cout<<"ENTER THE VALUE OF x:";
    cin>>x;
    cout<<endl;
    cout<<"ENTER ELEMENTS OF THE ARRAY:";
    for(int i=0;i<=5;i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<"ELEMENTS ARE:";
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    int flag=0;
    for(int i=0;i<=5;i++){
        if(x<arr[i])
            flag++;
    }
    cout<<"THE CALCULATED COUNT IS:"<<flag;
}





