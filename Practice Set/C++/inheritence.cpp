#include<iostream>
using namespace std;

class Car{

    public:
    string model;
    int year;

    Car(string model, int year){
        this->model = model;
        this->year = year;
    }
};

// Nissan class inherits from Car class (model, year)
class Nissan : public Car{
    public:
    float rating;

    Nissan(string model, int year, float rating) : Car(model, year){
        this->rating = rating;
    }

    void getCarInfo(){
        cout<<"Brand : Nissan"<<endl;
        cout<<"Model :"<<model<<endl;
        cout<<"Year : "<<year<<endl;
        cout<<"Rating : "<<rating<<endl;
    }

};

// Toyota class inherits from Car class (model, year)
class Toyota : public Car{
    public:
    float rating;
    string colour;

    Toyota(string model, int year, float rating,  string colour) : Car(model, year){
        this->rating = rating;
        this->colour = colour;
    }

    void getCarInfo(){
        cout<<"Brand : Toyota"<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Year : "<<year<<endl;
        cout<<"Rating : "<<rating<<endl;
    }

};

int main(){

    Nissan n1("gtr", 2018, 4.7);
    Toyota t1("supra", 2007, 4.4, "white");

    n1.getCarInfo();
    cout<<endl;
    t1.getCarInfo();

}