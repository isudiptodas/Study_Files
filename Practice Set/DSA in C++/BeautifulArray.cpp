// Make array beautiful (Non negative and negative not allowed adjacent)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> beautiful(vector<int> arr){
    
    stack<int>s;
    
    for(int i=0; i<arr.size(); i++){
        if(s.empty()){
            s.push(arr[i]);
        }
        else if(arr[i]>=0){
            if(s.top()>=0){
                s.push(arr[i]);
            }
            else{
                s.pop();
            }
        }
        else{
            if(s.top()<0){
                s.push(arr[i]);
            }
            else{
                s.pop();
            }
        }
    }
    
    vector<int>ans(s.size());
    int i = s.size()-1;
    
    while(!s.empty()){
        ans[i] = s.top();
        i--;
        s.pop();
    }
    
    return ans;
}

int main(){
    
    vector<int> arr = {3, 4, 7, -2, 9, -10, 12};
    
    vector<int> ans = beautiful(arr);
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
}