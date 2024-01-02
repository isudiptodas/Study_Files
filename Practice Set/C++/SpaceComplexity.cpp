// Space complexity (how much space is consuming)

/*

1. What's the space complexity of the code :

  int a = 0, b = 0;
  for(i=0; i<n; i++){
      a = a+rand();
  }
  
  for(j=0; j<m; j++){
      b = b+rand();
  }

Here we have created 4 variables (a, b, i, j)
So the space complexity will be constant -> O(1)
_________________________________________________________________________
  
2. What's the space complexity of the code :

  int a = 0, b = 0;
  for(i=0; i<n; i++){
      for(j=0; j<n; j++){
          a = a + j;
      }
  }
  
  for(k=0; k<n; k++){
      b = b + k;
  }

Here also we have created variables (a, b, i, j, k)
So again the space complexity will be O(1)
_________________________________________________________________________

3. What's the space complexity of the code in this case :
  
   func(){
      int arr[5] = {1, 2, 3, 4, 5};
      
      .....
      ........
      ........... hare are done some operations
      
  }

In this case also the space complexity will be O(1)
_________________________________________________________________________

4. What's the space complexity of the code in this case :

   int n;
   cin>>n;
   
   vector<int> v(n);
   
Now, in this case we have created a variable and its value is yet
to assign, and also created a vector whose size is n considering
in mind of the input. So in this case the complexity will be O(n)
_________________________________________________________________________

*/
