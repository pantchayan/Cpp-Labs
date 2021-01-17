#include <iostream>

using namespace std;



int main(){
    int s1,s2,s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;

    if(s1==s2 || s2==s3 || s3==s1){
        cout << "Its an isoceles traingle" << endl;
    }
    else{
        cout << "Its not an isoceles triangle" << endl;
    }
    return 0;
}