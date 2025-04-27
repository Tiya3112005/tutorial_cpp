#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"ENTER THE NO. OF ROWS: ";
    cin>>m;
    cout<<"ENTER THE NO. OF COLUMNS: ";
    cin>>n;
    int a=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<"  ";
            a++;
            
        }
        cout<<endl;
    }
}
