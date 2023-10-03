#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter any number (1-9) : " ;
    cin >> num;

    cout << "The table of " << num << " is " << endl;
    for(int i = 1; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}