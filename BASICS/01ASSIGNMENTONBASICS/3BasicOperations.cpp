//Take two numbers as input and perform addition, subtraction, multiplication, and division. Display the results. 
#include <iostream>
using namespace std;
int main(){
    int a, b;
    int sum,multiply,subtract,division;
    cout<< "Enter the values for the operations"<<endl;
    cin>> a>>b;

    //sum of a number
    sum = a+b;
    cout << "The sum of the digit is "<<sum<<endl;

    //Subtraction of a number
    subtract = a-b;
    cout << "The subtraction of a number is "<<subtract<<endl;

    //Multiply of a number
    multiply = a*b;
    cout << "The multiply of a number is "<<multiply<<endl;

    //Division 
    division = a/b;
    cout << "The division of a number is "<<division<<endl;

}