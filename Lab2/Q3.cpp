#include <iostream>

using namespace std;

int main(){

    double n;
    cin >> n;

    if(n<0){
        cout << "Error"<< endl;
    }
    else{
        double factorial = 1;
        for(double i =1;i<=n;i++){
            factorial *= i;
        }
        cout << factorial << endl;
    }
    return 0;
}