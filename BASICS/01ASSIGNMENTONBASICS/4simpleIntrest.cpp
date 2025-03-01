//Take input of principle, time and rate and find the simple interest 
#include <iostream>
using namespace std;
int main(){
    int principle;
    int time; //take it in years
    int rate;
    int simpleIntrest;
    cout << "Enter the value of Principle, Rate and Intreset"<<endl;
    cin>>principle>>time>>rate;
    simpleIntrest = (principle*time*rate)/100;
    cout<< "The Simple Intreset of a Program is"<<simpleIntrest<<endl;
}