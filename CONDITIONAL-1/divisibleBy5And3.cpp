#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    if(a%3==0 && a%5==0){
        cout<<"it is divisible by 5 as well as 3";
    }
    else{
        cout<<"it is not divisible by 5 and 3";
    }

}