/*
Write a method Met that takes as parameter an integer n.

You have to print the number of zeros at the end of the factorial of n.

For example, 3! = 6. The number of zeros are 0. 5! = 120. The number of zeros at the end are 1.

Hint: Think about which numbers multiplication leads to a 0 at the end

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Note: n! < 10^5

Example Input: 3
Output: 0
Example Input: 60
Output: 14
Example Input: 100
Output: 24
Example Input: 1024
Output: 253
*/
struct Solution {
  void Met(int n) {
      /* write your solution here */
      int count;
      for (int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
      cout<<count<<"\n";
  }
};
