/*
A prime number is a number greater than 1 that has is divisible only by itself and 1.

Write a method Met that takes an integer n and prints Prime if it is a prime number and Not Prime if it is not a prime.

Hint: Think of all the conditions you should check. Can negative numbers be a prime? What about 1? What about even numbers?

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 10
Output: Not Prime
Example Input: 5
Output: Prime
Example Input: -9
Output: Not Prime
*/
class Solution {
  public static void Met(int n) {
      /* write your solution here */
      int i,f=0;
      if(n<0)
          n*=(-1);
      for(i=2;i<=n/2;i++)
          if(n%i==0){
              f++;
              break;
      }
      if(f>0)
          System.out.println("Not Prime");
          else
          System.out.println("Prime");
  }
}
