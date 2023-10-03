#include<iostream>
using namespace std;

int main(){

int i = 0;

for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}

return 0;
}