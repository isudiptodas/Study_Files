// Break and continue

#include<iostream>
using namespace std;

int main(){
   
   int num;
   
   cout<<"Enter a value : ";
   cin>>num;
   
   cout<<"Break"<<endl;
   for(int i=1; i<=10; i++){
       cout<<i<<" ";
       if(i==num){
           break;
       }
   }
   
   cout<<endl<<"Continue"<<endl;
   for(int i=1; i<=10; i++){
       if(i==num){
          continue;
       }
       cout<<i<<" ";
   }
   
}