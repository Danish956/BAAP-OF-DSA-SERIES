#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"enter the number of coloumn";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int i=1; i<=m; i++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}