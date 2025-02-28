//Take a floating-point number as input, typecast it into an integer, and print both values. 
#include <iostream>
using namespace std;
int main(){
  float floatNumber;
  cout << "Enter your float number "<<endl;
  cin>>floatNumber;
  int IntegerNum = int(floatNumber);
  cout << "The float number is "<<floatNumber << "and integer number is " << IntegerNum<<endl;

}