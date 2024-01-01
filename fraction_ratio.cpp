#include <iostream>
#include "siu.h"  // Include the siu.h header file

using namespace std; // Place 'using namespace std;' here

// Function to convert a fraction into a ratio
void fractionToRatio(int numerator, int denominator) {
    int greatestCommonDivisor = gcd(numerator, denominator);
    int ratioNumerator = numerator / greatestCommonDivisor;
    int ratioDenominator = denominator / greatestCommonDivisor;

    cout << "Fraction " << numerator << "/" << denominator << " as a ratio is: ";
    cout << ratioNumerator << " : " << ratioDenominator << endl;
}

int main() {
    int num, denom;

    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> denom;

    fractionToRatio(num, denom);

    return 0;
}
