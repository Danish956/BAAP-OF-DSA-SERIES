#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the value of n";
    cin>>n;
    // for(int i=1; i<=2*n-1; i+=2){
    //     cout<<i<<endl;
    // }

    //method-2
    //2,7,12,17.....
    int a=2;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a+=5;
    }
}