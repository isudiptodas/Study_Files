// Printing reverse array with vector

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    
    int start = 0;
    int end = v.size()-1;
    
    while(start<=end){
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
    return reverse;
}

void print(vector<int> v){
    for(i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    
    vector<int>v;
    
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    v.push_back(15);
    v.push_back(21);
    
    reverse(v);
    
    vector<int>answer = reverse(v);
    
    print(ans);
    
    return 0;
}
