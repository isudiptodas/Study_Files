#include<iostream>
using namespace std;

int main(){

    typedef struct employee{
        int eId;
        float salary;
        char favChar;
    }ep;                      // Here by writing "ep" we are defining a short name for employee 

    ep sudipto;               // Here instead of writing "struct employee sudipto" we can simply write "ep sudipto" in short
    ep muffin;                // Here instead of writing "struct employee muffin" we can simply write "ep muffin" in short

    sudipto.eId = 06;
    sudipto.salary = 4500000;
    sudipto.favChar = 'z';

    muffin.eId = 18;
    muffin.salary = 4500000;
    muffin.favChar = 's';

    cout<<"The employee id of muffin is : "<<muffin.eId<<endl;
    cout<<"The employee id of sudipto is : "<<sudipto.eId<<endl;

return 0;
}
