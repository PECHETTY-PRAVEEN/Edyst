/*
Mr. Jack is laying down a row of bricks whose length is target inches. Mr. Jack has 2 types of bricks: small bricks (1 inch each) and big bricks (5 inch each). He wants to know if the number of small bricks and big bricks he has is enough.

If a brick is being used, it has to be used fully and not in parts.

Write a method Met that takes in 3 integers:

first integer has the value of target
second integer has number of big bricks
third integer has number of small bricks
The method should print Possible if the number of bricks are enough. Otherwise print Impossible.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 5 2 1
Output: Possible
Example Input: 10 0 10
Output: Possible
Example Input: 13 2 5
Output: Possible
Example Input: 13 3 0
Output: Impossible
Example Input: 13 2 0
Output: Impossible
*/

struct Solution {
  void Met(int target, int big_bricks, int small_bricks) {
      /* write your solution here */
      int i,j;
      i=target/5;
      j=target%5;
      if(big_bricks*5+small_bricks*1>=target)
          cout<<"Possible"<<"\n";
          else
          cout<<"Impossible"<<"\n";
              
  }
};
