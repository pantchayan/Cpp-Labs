#include <iostream>

using namespace std;

int main(){

    double n;
    cin >> n;

    int x = 0;
    for(int num=2;num<=n;num++){
        int count = 0;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                count++;
                break;
            }
        }
        if(count==0) x++;
    }

    cout << x << endl;
    return 0;
}