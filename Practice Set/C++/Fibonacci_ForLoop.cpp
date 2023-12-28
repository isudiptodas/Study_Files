// Fibonacci series using for loop

#include<iostream>
using namespace std;

int main(){
   
   int num, nextNum;
   int a = 0;
   int b = 1;
   
   cout<<"Enter a number : ";
   cin>>num;
   
   for(int i=1; i<=num; i++){
       
       nextNum = a + b;
       cout<<nextNum<<" ";
       
       a = b;
       b = nextNum;
   }
   
}