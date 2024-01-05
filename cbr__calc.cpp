#include <iostream>
#include <cmath>
using namespace std;

double cbr(){
    double ui;
    cout<<"Enter number:";
    cin>>ui;


    double result = cbrt(ui);
    return result;
}

int main(){
    double result =cbr();
    cout<<result;
    return 0;
}
