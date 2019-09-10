/*
Write a method that takes as paramater an integer. This integer is a 2 digit number.

Depending on the value of the number, print the English word for this number.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Example Input: 45
Output: forty-five
Example Input: 13
Output: thirteen
Example Input: 87
Output: eighty-seven
*/
struct Solution {

 void Met(int n) {

    if(n == 10) cout<<"ten"<<endl;

   else if(n == 11) cout<<"eleven"<<endl;

   else if(n == 12) cout<<"twelve"<<endl;

   else if(n == 13) cout<<"thirteen"<<endl;

   else if(n == 14) cout<<"fourteen"<<endl;

   else if(n == 15) cout<<"fifteen"<<endl;

   else if(n == 16) cout<<"sixteen"<<endl;

   else if(n == 17) cout<<"seventeen"<<endl;

   else if(n == 18) cout<<"eighteen"<<endl;

   else if(n == 19) cout<<"nineteen"<<endl;

   else if(n == 20) cout<<"twenty"<<endl;

   else if(n == 30) cout<<"thirty"<<endl;

   else if(n == 40) cout<<"forty"<<endl;

   else if(n == 50) cout<<"fifty"<<endl;

   else if(n == 60) cout<<"sixty"<<endl;

   else if(n == 70) cout<<"seventy"<<endl;

   else if(n == 80) cout<<"eighty"<<endl;

   else if(n == 90) cout<<"ninety"<<endl;

   else{

     if((n/10)%10 == 2) cout<<"twenty-";

     else if((n/10)%10 == 3) cout<<"thirty-";

     else if((n/10)%10 == 4) cout<<"forty-";

     else if((n/10)%10 == 5) cout<<"fifty-";

     else if((n/10)%10 == 6) cout<<"sixty-";

     else if((n/10)%10 == 7) cout<<"seventy-";

     else if((n/10)%10 == 8) cout<<"eighty-";

     else if((n/10)%10 == 9) cout<<"ninety-";

      

     if(n%10 == 1) cout<<"one";

     else if(n%10 == 2) cout<<"two";

     else if(n%10 == 3) cout<<"three";

     else if(n%10 == 4) cout<<"four";

     else if(n%10 == 5) cout<<"five";

     else if(n%10 == 6) cout<<"six";

     else if(n%10 == 7) cout<<"seven";

     else if(n%10 == 8) cout<<"eight";

     else if(n%10 == 9) cout<<"nine";

     cout<<endl;

   }

 }

};
