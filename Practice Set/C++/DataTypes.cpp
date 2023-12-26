#include<iostream>
using namespace std;

int main(){
    
    int a = 7;
    float b = 1.23;
    char c = 'M';
    double d = 6.97;
    string e = "Muffin";
    
    sizeof(a);
    
    int size = sizeof(a);
    
    cout<< a <<endl;
    cout<< b <<endl;
    cout<< c <<endl;
    cout<< d <<endl;
    cout<< size <<endl;
    cout<< e <<endl;
}