/*
Write a method Met that takes as parameter an integer N and prints the pattern like in the examples. Note that N represents the number of rows.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Note: N will be less than or equal to 13

Example Input: 5
Output:

15
14.10
13.09.06
12.08.05.03
11.07.04.02.01
Example Input: 7
Output:

28
27.21
26.20.15
25.19.14.10
24.18.13.09.06
23.17.12.08.05.03
22.16.11.07.04.02.01

*/
struct Solution {
  void Met(int N) {
      /* write your solution here */
      int k=N*(N+1)/2;
      int l=N-1;
      for(int i=N;i>0;i--){int k1=k;int l1=l;
      for(int j=0;j<=N-i;j++)
      {if(k1<=9)
      cout<<"0";
      if(j==N-i)
      cout<<k1;
      else
          cout<<k1<<".";
          k1-=l1--;}
          k--;cout<<endl;
          }
          
  }
};
