#include <iostream>
using namespace std;

int main(){
    double dig;
    double total;
    cout << "Enter number: ";
    cin >> dig;
    cout << endl;
    cout << "Enter total: ";
    cin >> total;
    cout << "Percentage is: " << (dig / total) * 100 << "%" << endl;
    return 0;
}
