#include <iostream>

using namespace std;


int main(){

    int n;

    cin >> n;

    int Sum = 0;

    while(n>0){
        Sum+= (n%10);
        n = n/10;
    }

    cout << "Sum of the digits is : " << Sum << endl;

    return 0;

}