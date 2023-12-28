// Prime number using for loop

#include<iostream>
using namespace std;

int main(){
   
   int num;
   bool isPrime = 1;
   
   cout<<"Enter a number to check prime : ";
   cin>>num;
   
   for(int i=2; i<num; i++){
       if(num%i==0){
           isPrime = 0;
           break;
       }
       
   }
   
   if(isPrime == 0){
       cout<<num<<" is not a prime number"<<endl;
   }
   else{
       cout<<num<<" is a prime number"<<endl;
   }
   
}