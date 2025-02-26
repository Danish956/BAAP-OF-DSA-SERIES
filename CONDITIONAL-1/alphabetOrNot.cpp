#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the alphabet ";
    cin>>ch;
    int ascii=(int)ch;
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        cout<<"its a alphabet";
    }
    else{
        cout<<"its not a alphabet";
    }
    
}