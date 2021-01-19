// // Gross	Salary	(BASIC	+	DA%	of	BASIC	+	HRA%	of	BASIC)

#include <iostream>

using namespace std;

int main(){

    double basic,da,hra;
    cin >> basic;
    cin >> da;
    cin >> hra;

    double gross = basic + (basic * (da/100)) + (basic * (hra/100));

    cout << gross << endl;

    return 0;
}