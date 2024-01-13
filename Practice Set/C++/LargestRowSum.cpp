// Find the largest sum in a row

#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int arr[3][3] = {1, 3, 5, 7, 11, 21, 34, 36, 2};
    int sum = 0;
    int maximum = INT_MIN;
    
    // Printing array elements
    cout<<"Array elements are : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // Printing the sum of rows
    cout<<"Sum of rows are : ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    
    // Sum is again initialised as 0 to prevent misaddition
    sum = 0;
    
    // Printing largest row sum
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum = sum + arr[i][j];
        }
        if(sum>maximum){
            maximum = sum;
        }
    }
    
    cout<<"The largest row sum is : "<<maximum<<endl;
    
    
    return 0;
}