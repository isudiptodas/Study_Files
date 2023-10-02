#include<iostream>
using namespace std;

class Car {
  // Data members or attributes
  string brand;
  string model;
  int year;

public:
  // Member functions or methods
  void setBrand(string b) {
    brand = b;
  }

  void setModel(string m) {
    model = m;
  }

  void setYear(int y) {
    year = y;
  }

  void displayInfo() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
  }
};

int main(){

  Car myCar;  // Creating an object of the Car class       

  myCar.setBrand("Toyota");
  myCar.setModel("Camry");
  myCar.setYear(2022);

  myCar.displayInfo();

return 0;
}
