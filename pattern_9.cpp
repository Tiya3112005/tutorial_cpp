#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"ENTER THE NO. OF ROWS: ";
    cin>>m;
    cout<<"ENTER THE NO. OF COLUMNS: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1;
            
        }
        cout<<endl;
    }
}
