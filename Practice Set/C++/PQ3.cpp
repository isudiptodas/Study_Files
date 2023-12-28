// Practice question 3 : guess the output

#include<iostream>
using namespace std;

int main(){
   
   int a = 1;
   int b = 2;
   
   if(a-- > 0 && ++b > 2){
       cout<<"Inside if is true"<<endl;
   }
   else{
       cout<<"Inside else is true"<<endl;
   }
   
   cout<<a<<" "<<b<<endl;
   
}