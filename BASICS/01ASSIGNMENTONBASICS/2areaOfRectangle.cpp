//Take length and breadth as input (both integers) and calculate the area of the rectangle.
#include <iostream>
using namespace std;
int main(){
    int length, breadth, area;
    cout << "Enter the value of lenth and breadth "<<endl;
    cin>> length >> breadth;
    area = length*breadth;
    cout<< "The area of a rectange is "<<area;
}