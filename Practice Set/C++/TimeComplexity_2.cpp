// Time complexity 2

/*

1. What's the time complexity of the code :

  int a = 0, b = 0;
  for(i=0; i<n; i++){
      a = a+rand();
  }
  
  for(j=0; j<m; j++){
      b = b+rand();
  }

Assume that rand() is O(1) time.

*NOTE*
If two different loops, then (add +)
If two loops(nested), then it will be (multiply *)

In this case the time complexity will be O(n+m)
_________________________________________________________________________
  
2. What's the time complexity of the code :

  int a = 0, b = 0;
  for(i=0; i<n; i++){
      for(j=0; j<n; j++){
          a = a + j;
      }
  }
  
  for(k=0; k<n; k++){
      b = b + k;
  }

In this case here is two loops(nested), then the complexity
will be O(n*n) = O(n²)

Another loop that is O(n)

Total two loops, then -> O(n²) + O(n) = O(n²)
_________________________________________________________________________

3. What's the time complexity of the code :

  int a = 0;
  for(i=0; i<n; i++){
      for(j=n; j>i; j--){
          a = a + i + j;
      }
  }

Here in this case there are two loops(nested), one goes from 0-n
and another goes from n-i. Now, here in the 2nd loop it's decreasing
so, assume a worst case like 0. 

First loop runs 0-n   -> O(n)
Second loop runs n-i  -> 0(n)
Total = 0(n²)
_________________________________________________________________________

*/
