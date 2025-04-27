#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"ENTER THE NO. OF ROWS: ";
    cin>>m;
    cout<<"ENTER THE NO. OF COLUMNS: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=n;j>=n+1-i;j--){
            cout<<j;
            
        }
        cout<<endl;
    }
}
