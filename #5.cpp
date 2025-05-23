#include <iostream>
using namespace std;

int main() {
    double value,conversion;
    int choice;
    cout<<"Enter the value you wish to convert:\n";
    cin>>value;

    cout<<"Select the conversion:\n1. Kilometers to Miles\n2. Pounds to Kilograms\n3. Celcius to Fahrenheit\n4. Liters to Gallons\nEnter your choice (1-4):\n";
    cin>>choice;
label1:
    if(choice==1 || choice==2 || choice==3 || choice==4) {
        if(choice==1) {
            conversion=value*0.621371;
            cout<<value<<" kilometer(s) is equal to "<<conversion<<" miles.";}

        if(choice==2) {
            conversion=value*0.453592;
            cout<<value<<" pound(s) is equal to "<<conversion<<" kilograms.";}

        if(choice==3) {
            conversion=(value*9/5)+32;
            cout<<value<<" Celsius is equal to "<<conversion<<" Fahrenheit.";}

        if(choice==4) {
            conversion=value*0.264172;
            cout<<value<<" liter(s) is equal to "<<conversion<<" gallon(s).";}
    }

else{cout<<"Invalid selection. Please choose a valid option (1-4).\n";
     cin>>choice;
     goto label1;}


    return 0;
}
