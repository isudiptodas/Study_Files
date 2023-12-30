#include<iostream>
using namespace std;

int main(){
    
    char alphabet;
    
    cout<<"Enter an alphabet : ";
    cin>>alphabet;
    
    switch(alphabet){
        
        case 'a' : cout<<"a for apple"<<endl; break;
        case 'b' : cout<<"b for bangalore"<<endl; break;
        case 'c' : cout<<"c for california"<<endl; break;
        case 'd' : cout<<"d for delhi"<<endl; break;
        case 'e' : cout<<"e for ethernet"<<endl; break;
        case 'f' : cout<<"f for football"<<endl; break;
        case 'g' : cout<<"g for gym"<<endl; break;
        case 'h' : cout<<"h for hemlo"<<endl; break;
        case 'i' : cout<<"i for india"<<endl; break;
        case 'j' : cout<<"j for jana gana mana"<<endl; break;
        case 'k' : cout<<"k for krishna"<<endl; break;
        case 'l' : cout<<"l for lamborghini"<<endl; break;
        case 'm' : cout<<"m for mexico"<<endl; break;
        case 'n' : cout<<"n for new york"<<endl; break;
        case 'o' : cout<<"o for oxemberg"<<endl; break;
        case 'p' : cout<<"p for paytm"<<endl; break;
        case 'q' : cout<<"q for qasar"<<endl; break;
        case 'r' : cout<<"r for remainder"<<endl; break;
        case 's' : cout<<"s for sunlight"<<endl; break;
        case 't' : cout<<"t for tvs"<<endl; break;
        case 'u' : cout<<"u for underage"<<endl; break;
        case 'v' : cout<<"v for volume"<<endl; break;
        case 'w' : cout<<"w for why"<<endl; break;
        case 'x' : cout<<"x for xperia"<<endl; break;
        case 'y' : cout<<"y for yesss"<<endl; break;
        case 'z' : cout<<"z for zero"<<endl; break;
        
        default: cout<<"Enter a lower case alphabet"<<endl;
    }
}