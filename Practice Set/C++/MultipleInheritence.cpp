#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound() = 0;

};

class Dog : public Animal{
    public:
    void sound() override {
        cout<<"bhow bhow"<<endl;
    }
};

class Cat : public Animal{
    public:
    void sound() override{
        cout<<"meowww"<<endl;
    }
};

class Cow : public Animal{
    public:
    void sound() override {
        cout<<"hmmmm"<<endl;
    }
};

class AnimalSound : public Dog, public Cat, public Cow{
    public:
    void sound(){
        Dog::sound();
        Cat::sound();
        Cow::sound();
    }
};

int main(){

    AnimalSound a1;

    a1.sound();

}