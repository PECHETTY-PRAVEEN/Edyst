"""
Consider the following sequence:

1st term: 1
2nd term: 1 2 1
3rd term: 1 2 1 3 1 2 1
4th term: 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1

And so on. Write a method Met that takes as parameter an integer n and prints the nth terms of this sequence.

Hint: Perhaps you should use a String to store the sequence? What is happening in each term of the sequence?

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 1
Output: 1
Example Input: 4
Output: 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1
"""
class Solution:
    def Met(self, n):
        # write your method here
        temp=""
        t=""
        x=""
        for i in range(1,n+1):
            temp=str(i)+' '
            x=t+temp
            t=x+t
        print(t)
        
        
