#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter the cost price ";
    cin>>cp;
    int sp;
    cout<<"enter the selling price ";
    cin>>sp;
    if(cp>sp){
        cout<<"its a loss "<<cp-sp;
    }
    else{
        cout<<"its a profit "<<sp-cp;
    }
}