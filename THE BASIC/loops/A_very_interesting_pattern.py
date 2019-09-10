"""
Write a method Met that takes as parameter an integer n and prints the pattern as follows.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Note: the pattern for 0 is xx

Example Input: 135
Example Output:
xx1
xxxxx3
xxxxxxxxxxx5
Example Input: 127
Example Output:
xx1
xxx2
xxxxxxxxxxxxxxxxx7

"""
class Solution:
    def Met(self, n):
        # write your method here
        a=[2,2,3,5,7,11,13,17,19,23,29]
        p=str(n)
        for i in p:
            for j in range(0,a[int(i)]):
                print("x",end="")
            print(i)
            
