//Take 2 integers input and print the greatest of them.  
#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout << "Enter the value of a and b"<<endl;
    cin >> a >> b;

    if(a>=b){
        cout << "A is greater";
    }else{
        cout << "B is greater";
    }
}