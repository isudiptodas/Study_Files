/*

cout implementation for int arrays and char arrays is different. 
For arr it will print the address but for ch it will print the content.

*/

#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {5, 7, 11, 18, 24};
    char ch[10] = "science";
    
    cout<<arr<<endl;    // Prints the address
    cout<<ch<<endl;     // Prints the content
    
    char *c = &ch[0];
    
    cout<<c<<endl;     // In this case also it will print the content of the character
    
}