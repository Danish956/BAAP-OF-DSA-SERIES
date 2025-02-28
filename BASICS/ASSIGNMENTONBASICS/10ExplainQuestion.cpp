// Explain the difference between x++ and ++x in your own words. 
// • Take an integer as input and: 
// • Print its value using post-increment (x++). 
// • Print its value again using pre-increment (++x).

// The difference between x++ (post-increment) and ++x (pre-increment) is:

// Post-increment (x++): The value of x is used first, and then it is incremented.
// Pre-increment (++x): The value of x is incremented first, and then the updated value is used.


#include <iostream>
using namespace std;
int main(){
    // Post Increment 
    int x = 7; 
    cout << x++ <<endl;

    // Pre Increment
    int y = 7;
    cout << ++y;


    
}