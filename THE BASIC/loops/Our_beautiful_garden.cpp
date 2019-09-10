/*
We are now interested in gardening! Our garden will have 2 things: flowers and grass.

A flower is represented by # and grass by .

Write a method Met that takes as parameter an integer N and makes the garden pattern like in the examples.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 4
Output:

#.#.#.#.#.#.#.#.#
#.#.#.#...#.#.#.#
#.#.#.......#.#.#
#.#...........#.#
#...............#
#.#...........#.#
#.#.#.......#.#.#
#.#.#.#...#.#.#.#
#.#.#.#.#.#.#.#.#
Example Input: 2
Output:

#.#.#.#.#
#.#...#.#
#.......#
#.#...#.#
#.#.#.#.#

*/
struct Solution {
  void Met(int N) {
  int i,j;
      for(i=1;i<=N;i++)
      {
      cout<<"#.";
      }
      cout<<"#";
      for(i=1;i<=N;i++)
      {
      cout<<".#";
      }
      cout<<"\n";
      
      for(i=0;i<N;i++)
      {
      for(j=0;j<N-i;j++)
      {
      cout<<"#.";
      }
      for(j=0;j<(i*4)+1;j++)
      {
      cout<<".";
      }
      for(j=0;j<N-i;j++)
      {
      cout<<".#";
      }
      cout<<"\n";
      }
      
      for(i=N-2;i>=0;i--)
      {
      for(j=0;j<N-i;j++)
      {
      cout<<"#.";
      }
      for(j=0;j<(i*4)+1;j++)
      {
      cout<<".";
      }
      for(j=0;j<N-i;j++)
      {
      cout<<".#";
      }
      cout<<"\n";
      }
      
      for(i=1;i<=N;i++)
      {
      cout<<"#.";
      }
      cout<<"#";
      for(i=1;i<=N;i++)
      {
      cout<<".#";
      }
      cout<<"\n";
      }
      
};
