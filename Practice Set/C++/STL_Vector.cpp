#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>w(5,1); // Here a vector is created with capacity 5 and all the elements are initialized as 1
    vector<int>v;     // Initialized a vector
    v.push_back(2);   // Pushed an element in the vector
    v.push_back(7);
    v.push_back(9);
    v.push_back(12);
    
    v[1] = 21;       // Updated the value
    v.pop_back(9);   // Popped an element from vector (deleted)
    v.pop_back(2);
    v.clear();       // Deletes all the element of the vector
   
    cout<<v.front(); // Prints the first element of the vector
    cout<<v.back();  // Prints the last element of the vector
    cout<<v.empty(); // Returns 0 if vector has element and 1 in case vector is empty
    
    // Copy vector elements in another vector
    w = v;
    
    // Iterator in a vector
    v.begin();       // Points at the beginning of the vector
    v.end();         // Points after the ending of the vector
    v.rbegin();      // Points at the reverse and starts from there
    v.rend();        // Points
    
    // Easy way to print vector elements
    for(i=0; i<v.size(); i++){ // v.size() - prints the size of vector(elements)
        cout<<v[i];
    }
    
    for(int i=0; i<v.capacity(); i++){ // v.capacity() - prints the total holding capacity of vector
        cout<<v[i];
    }
    
    // Sorting
    sort(v.begin(), v.end());  // Sorts from beginning to end (ascending order)
    sort(v.begin(), v.end(), greater<int>());  // Sorts from ending to beginning (reverse order)
    // Another way of sorting
    sort(v.rbegin(), v.rend());
    
   
    // Searching in binary search
    cout<<binarySearch(v.start(), v.end(), 7);
    
}