#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    double root1, root2;

    root1 = (sqrt((b*b) - (4*a*c)) - b)/(2*a);

    root2 = (-sqrt((b*b) - (4*a*c)) - b)/(2*a);

    cout << "Root 1 : "<< root1 << endl; 
    cout << "Root 2 : "<<root2 << endl;
    return 0;
}