#include <iostream>

using namespace std;

int main()
{
    double weight, length, width, height, dimensionalweight;
    int cost;
    cout<<"Enter the package weight in kilograms:\n";
    cin>>weight;
    cout<<"Enter the package dimensions (length, width, height) in centimeters:\n";
    cin>>length>>width>>height;

    dimensionalweight= (length*width*height)/5000;
    cout<<"The dimensional weight is "<<dimensionalweight<<"kg.\n";

    if(dimensionalweight>weight) {
        if (dimensionalweight<=2){cost=5;}
        if (dimensionalweight>2 && dimensionalweight<=10){cost=10;}
        if (dimensionalweight>10 && dimensionalweight<=20){cost=20;}
        if (dimensionalweight>20){cout<<"The package is too heavy to be shipped\n";}
    }

    else {
        if (weight<=2){cost=5;}
        if (weight>2 && dimensionalweight<=10){cost=10;}
        if (weight>10 && dimensionalweight<=20){cost=20;}
        if (weight>20){cout<<"The package is too heavy to be shipped\n";}
    }

    if(cost!=0) {cout<<"The shipping cost is $"<<cost<<".\n";}






    return 0;
}
