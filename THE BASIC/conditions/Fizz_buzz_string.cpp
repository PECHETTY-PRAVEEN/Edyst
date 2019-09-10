/*
Write a method Met that takes as parameter 1 String. The entire string is in lowercase.

If the string starts with f print Fizz. If the string ends with b return Buzz.
If both the f and b conditions are true, return FizzBuzz. In all other cases, print the string unchanged.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Use the System.out.println() statement for printing.

Example Input: fuel
Output: Fizz
Example Input: lob
Output: Buzz
Example Input: flab
Output: FizzBuzz
Example Input: goodness
Output: Goodness
*/
struct Solution {
  void Met(string word) {
      /* write your solution here */
      int i=0;
      while(word[i]!='\0')
          i++;
      if(word[0]=='f'&&word[i-1]=='b')
      cout<<"FizzBuzz"<<"\n";
      else if(word[0]=='f')
      cout<<"Fizz"<<"\n";
      else if(word[i-1]=='b')
      cout<<"Buzz"<<"\n";
      else
      cout<<word<<"\n";
  }
};
