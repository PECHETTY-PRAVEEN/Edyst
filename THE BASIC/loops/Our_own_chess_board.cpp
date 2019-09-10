/*
Let’s print a chessboard!

Write a method Met that takes 2 parameters:

An integer N. This is size of the chessboard
A string which has either W or B, i.e, the starting alphabet of our chessboard
The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 2 W
Output:
WB
BW
Example Input: 3 B
BWB
WBW
BWB
*/
struct Solution {
  void Met(int N, string start) {
      /* write your solution here */
      
      int i,j;
      string t;
      if(start=="W")
           t="B";
          else
          t="W";
                  for(i=0;i<N;i++){
                          for(j=0;j<N;j++){
                              if(t=="B")
                                t="W";
                                  else 
                                 t="B";
                               if(N%2==0&&i!=0&&j==0){
                               if(t=="B")
                                t="W";
                                  else 
                                 t="B";
                               
                               }
                               cout<<t;
                              }
                          cout<<"\n";
                  }
      }
      
      
  
};
