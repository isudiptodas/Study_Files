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
    
    hero john;      // created object
    
    john.old_health = 70;
    john.old_level = 'A';
    
    john.setNewHealth(50);
    john.setNewLevel('C');
    
    cout<<"Old health and level of john is : "<<john.old_health<<" "<<john.old_level<<endl;
    cout<<"New health and level of john is : "<<john.getNewHealth(0)<<" "<<john.getNewLevel('a')<<endl;
    
}