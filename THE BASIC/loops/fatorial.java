/*
The factorial of a non-negative integer n denoted by n!, is the product of all positive integers less than or equal to n. For example,

5! = 5 x 4 x 3 x 2 x 1 = 120

By convention, 0! = 1.

Write a method Met that takes as parameter an integer n and prints the factorial of the number.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Note: n ranges from 0 to 50

Example Input: 5
Output: 5! = 120
Example Input: 9
Output: 9! = 362880
*/
class Solution {
  public static void Met(int n) {
      /* write your solution here */
       int t=1,i;
      for(i=n;i>0;i--)
          t*=i;
        System.out.println(n+"! = "+t);
  }
}
