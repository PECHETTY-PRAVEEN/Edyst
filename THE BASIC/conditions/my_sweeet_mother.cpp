/*Today, your mother wants to make sweets for you because of your exam results.

She will make 0 Sweets if you scored 60 or less.
She will make 1 Sweet if you scored between 61 and 80 inclusive.
If you scored 81 or higher, she will make 2 Sweets.
However, if it is your birthday, then your mother will consider your score to be 5 higher than it currently is. (Eg, 57 become 62, if it’s your birthday)

Write a method Met that takes in 2 parameters:

first an integer that has your score
the second is a boolean value that is true if it is your birthday and false if it is not your birthday
You have to print the number of sweets you will receive (0, 1 or 2) based on the given parameters.

Example: Met(65,false) prints 1 because you scored between 61 and 80, and it is not your birthday.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 65 false
Output: 1
Example Input: 57 true
Output: 1
Example Input: 90 false
Output: 2 */

struct Solution {
  void Met(int score, bool is_birthday) {
      /* write your solution here */
      if(is_birthday)
          score+=5;
       if(score<=60)
           cout<<"0"<<"\n";
        else if(score<=80)
            cout<<"1"<<"\n";
           else
               cout<<"2"<<"\n";
  }
};
