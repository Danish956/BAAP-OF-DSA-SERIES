#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int lastdigit=0;
    int r=0;
    while(n>0){
        r=r*10;
        lastdigit=n%10;
        r+=lastdigit;
        n/=10;
        
    }
    cout<<r;
}