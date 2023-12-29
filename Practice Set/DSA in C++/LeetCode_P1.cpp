// Leetcode problem : find number of 1 bits

#include<iostream>
using namespace std;

   int numberBits(int n){
       
       int count = 0;
       
       while(n!=0){
           if(n&1){
             count++;
           }
           
          n = n>>1;
       }
       
       return count;
   }


int main(){
    
    cout<<"Number of 1 bits are : "<<numberBits(7659)<<" ";
    
}