/*
Write a method Met that takes as parameter an integer value. Print Fizz if it is a multiple of 3, Buzz if it is a multiple of 5 and FizzBuzz if it is a multiple of both 3 and 5. Otherwise, print the number itself.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Use the System.out.println() statement for printing.

Example Input: 27
Output: Fizz
Example Input: 35
Output: Buzz
Example Input: 60
Output: FizzBuzz
Example Input: 11
Output: 11
*/
struct Solution {
  void Met(int n) {
      /* write your solution here */
      if(n%3==0&&n%5==0)
       cout<<"FizzBuzz"<<"\n";
       else if(n%3==0)
       cout<<"Fizz"<<"\n";
       else if(n%5==0)
       cout<<"Buzz"<<"\n";
       else
       cout<<n<<'\n';
       
  }
};
