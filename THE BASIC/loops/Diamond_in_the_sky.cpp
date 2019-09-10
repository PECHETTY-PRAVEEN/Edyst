/*
Write a method Met that takes as parameter an integer N and prints a diamond like the examples below.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Hint: How many rows are there for a number N? How many columns? How many . on each row? How many * on each row?

Example Input: 4
Output:

....*....
...***...
..*****..
.*******.
*********
.*******.
..*****..
...***...
....*....
Example Input: 2
Output:

..*..
.***.
*****
.***.
..*..

*/
struct Solution {
  void Met(int N) {
      /* write your solution here */
      
           int number, i, k, count = 1;
           number=N+1;
           
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
           cout<<(".");
       
        for (i = 1; i <= 2 * k - 1; i++)
            cout<<("*");
             for (i = 1; i <= count; i++)
           cout<<(".");
        cout<<("\n");
         count--;
     }
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count; i++)
             cout<<(".");
         
         for (i = 1 ; i <= 2 *(number - k)-  1; i++)
            cout<<("*");
            for (i = 1; i <= count; i++)
             cout<<(".");
            count++;
         cout<<("\n");
      }
  }
};
