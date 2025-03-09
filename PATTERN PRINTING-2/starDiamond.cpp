#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number rows";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1; i<=2*i-1; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        if(nsp<=n-1) nsp--;
        else nsp++;
        for(int k=1; k<=nst; k++){
            cout<<"*";
        }
        if(nst<=n-1) nst+=2;
        else nst-=2;

        cout<<endl;
    }
}