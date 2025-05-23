#include <iostream>
#include  <cmath>

using namespace std;

int main() {
    int number1, number2;

    cout<<"Enter the first number: \n"; //first number
    cin>>number1;
    cout<<"Enter the second number: \n"; //second number
    cin>>number2;

    if(number1%number2==0) {cout<<number1<<" is divisible by "<<number2<<endl;} //question #1
    else {cout<<number1<<" is not divisible by "<<number2<<endl;}

    if(number2%number1==0) {cout<<number2<<" is divisible by "<<number1<<endl;} //question #2
    else {cout<<number2<<" is not divisible by "<<number1<<endl;}

    int absdiff = abs(number1 - number2);                                     //question #3
    cout<<"The absolute difference between the two numbers is "<<absdiff<<endl;

    int remainder = number1%number2;                                            //question #4
    int result = number1/number2;
    cout<<"The result of dividing "<<number1<<" by "<<number2<<" is "<<result<<" with a remainder of "<<remainder<< endl;

    return 0;}
