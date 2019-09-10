/*
Write a method Met that takes as parameter an integer N and creates an NxN triangular pattern like the examples below.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 3
Example Output:

***
.**
..*
Example Input: 5
Example Output:

*****
.****
..***
...**
....*



*/
struct Solution {
  void Met(int N) {
      /* write your solution here */
      int i,j;
      for(i=0;i<N;i++){
      for(j=0;j<N;j++){
      if(i<=j)
          cout<<"*";
          else
          cout<<".";
      }
      cout<<"\n";
      }
  }
};
