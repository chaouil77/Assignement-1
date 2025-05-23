#include <iostream>
using namespace std;



int main() {
    double salary,tax, salaryaftertax;

    cout<<"What is your annual salary?\n";                       //user input
    cin>>salary;

    if(salary<10000){tax=0;}                                                //salary under 10 000
    if(salary>=10000 && salary<=20000){tax=(salary-10000)*0.1-500;}         //salary between 10 000 and 20 000
    if(salary>20000 && salary<=50000){tax=(1000+(salary-20000)*0.2-1000);}  //salary between 20 001 and 50 000
    if(salary>50000 && salary<=100000){tax=(7000+(salary-50000)*0.3-500);}  //salary between 50 001 and 100 000
    if(salary>100000){tax=(22000+(salary-100000)*0.4);}                     //salary over 100 000


    if(tax<0){tax=0;}                                            //final output + tax correction
    salaryaftertax=salary-tax;
    cout<<"Salary: $"<<salary<<endl;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"Salary after tax: $"<<salaryaftertax<<endl;

    return 0;
}
