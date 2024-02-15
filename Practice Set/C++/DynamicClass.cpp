#include<iostream>
using namespace std;

// class defined
class hero{
    
    int new_health;
    char new_level;
    
    public:
    
    int old_health;
    char old_level;
    
    
    void setNewHealth(int h){
        new_health = h;
    }
    
    void setNewLevel(char l){
        new_level = l;
    }
    
    int getNewHealth(int h){
        return new_health;
    }
    
    char getNewLevel(int h){
        return new_level;
    }

};

int main(){
    
    hero *zayn = new hero;    // dynamically allocated
    
    zayn->old_health = 70;
    zayn->old_level = 'A';
    
    zayn->setNewHealth(50);
    zayn->setNewLevel('C');
    
    cout<<"Old health and level of zayn is : "<<zayn->old_health<<" "<<zayn->old_level<<endl;
    cout<<"New health and level of zayn is : "<<zayn->getNewHealth(0)<<" "<<zayn->getNewLevel('a')<<endl;
    
    delete zayn;
    
}