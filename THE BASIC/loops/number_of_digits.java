/*

Write a method Met that takes as parameter an integer and prints the number of digits in the integer.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 7897
Output: 4
Example Input: -956
Output: 3
Example Input: 0
Output: 1
*/
class Solution {
  public static void Met(int n) {
      /* write your solution here */
      int t,r=0;
      t=n;
      if(t<0)
      t=t*-1;
      while(t>0){
      r++;
      t/=10;
}
System.out.println(r);
}
}
