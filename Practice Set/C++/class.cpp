#include<iostream>
using namespace std;

class Teacher{
    private:
    int salary;

    public:
    string name;
    string dept;
    int age;

    Teacher(string name, string dept, int age){
        this->name = name;
        this->dept = dept;
        this->age = age;
    }
    
    // setter to set salary
    void setSalary(int salary){
        this->salary = salary;
    }
    
    // getter to get salary value
    int getSalary(){
        return salary;
    }
    
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"dept: "<<dept<<endl;
        cout<<"salary: "<<salary<<endl;
    }

};

int main(){

    Teacher t1("sudipto", "CS", 20);
    t1.getInfo();

    t1.setSalary(70000);
    t1.getInfo();

}

