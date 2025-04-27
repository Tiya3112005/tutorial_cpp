#include<iostream>
using namespace std;
int main(){
    int n,i=0,j;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    j=n-1;
    int arr[n],temp;
    cout<<"ENTER ELEMENTS OF THE ARRAY:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<"ARRAY-ELEMENTS ARE:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"AFTER REVERSING ARRAY-ELEMENTS ARE:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
