#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

  public:

     void setid(void){
        cout<<"Enter employee ID : ";
        cin>>id;
     }

    void getid(void){
        cout<<"The ID os this employee is : "<<id<<endl;
    }
};

int main(){

    employee facebook[4];

    facebook[0].setid();
    facebook[0].getid();

    for(int i=0; i<4; i++){
        facebook[i].setid();
        facebook[i].getid();
    }

return 0;
}
