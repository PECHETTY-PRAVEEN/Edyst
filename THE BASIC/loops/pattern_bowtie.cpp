/*
Write a method Met that takes as parameter an integer N and prints an NxN formation like the examples below.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Hint: Is there a relation between row number and the number of *? What about row number and number of .?

Example Input: 1
Example Output:

*.*
***
*.*
Example Input: 5
Example Output:

*.........*
**.......**
***.....***
****...****
*****.*****
***********
*****.*****
****...****
***.....***
**.......**
*.........*

*/
struct Solution {
  void Met(int N) {
      /* write your solution here */
      int i,j,n;
      for(i=-n;i<=n;i++)
      {
          for(j=-n;j<=n;j++){
          if(i*i<=j*j)
          cout<<"*";
          else
          cout<<".";
          }
          cout<<"\n";
      }
    
  }
};
