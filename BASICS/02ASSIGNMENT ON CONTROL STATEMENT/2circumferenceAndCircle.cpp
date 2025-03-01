// Given the radius of the circle predict whether numerically area of this circle is larger 
// than the circumference or not 

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout << "Enter the value of a radius"<<endl;
    int radius, cicumference, area;
    cin >> radius;
    cicumference = 2*(22/7)*radius;
    area = (22/7)*pow(radius,2);
    if(area > cicumference){
        cout << "Area is greater than Circumference"<<endl;
    }else{
        cout << "Circumference is greater than Area";
    }
}