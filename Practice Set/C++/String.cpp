#include<iostream>
#include<string>
using namespace std;

// Function for length count
int countLength(char name[]){
    
    int count = 0;
    for(int i=0; i<name[i]!='\0'; i++){
        count++;
    }
    return count;
}

// Function for reverse string
string reverseString(char name[], int length){
    int start = 0;
    int end = length - 1;
    
    while(start<end){
        int temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        
        start++;
        end--;
    }
    
    return string(name, length);
    
}

// Function to check palindrome or not
void palindromeCheck(char name[], int length){
    int start = 0;
    int end = length - 1;
    int check = 1;
    
    while(start<=end){
        if(name[start]!=name[end]){
            check = 0;
            break;
        }
        else{
         start++;
         end--;
        }
    }
    
    if(check){
        cout<<"Name is palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }

}


int main(){
    
    char name[30];
    
    cout<<"Enter your name : ";
    cin>>name;
    
    int length = countLength(name);
    string reverse = reverseString(name, length);
    
    cout<<"Length of name is : "<<length<<endl;
    cout<<"Reverse of name is "<<reverse<<endl;
    palindromeCheck(name, length);
    
    return 0;
}
