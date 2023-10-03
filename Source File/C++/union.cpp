#include<iostream>
using namespace std;

int main(){

    union share{
        int rice;
        float car;
        char pounds;
    };

    union share m1;
    
    m1.rice = 34;

    cout<<"The value of m1.rice is :"<<m1.rice<<endl;
    

return 0;
}