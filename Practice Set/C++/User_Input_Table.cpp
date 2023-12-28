// Print table of a number by taking input from user

#include<iostream>
using namespace std;

int main(){
   
   int i, num;
   
   cout<<"Enter a number you want table of : ";
   cin>>num;
   
   cout<<"Table of "<<num<<endl;
   
   for(i=1; i<=12; i++){
       cout<<num<<" x "<<i<<" = "<<num*i<<endl;
   }
   

}