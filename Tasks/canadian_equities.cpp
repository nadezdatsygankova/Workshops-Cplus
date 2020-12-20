/*Author: Nadezda Tsygankova
  Description: Workshop05
  Due date:07/14/2020
*/

/*
Character Testing and String Validation

The Canadian Equities investment company offers a wide range 
of investment opportunities ranging from mutual funds to bonds. 
Investors can check the value of their portfolio from the American Equities’ web
page. Information about personal portfolios is protected via encryption and 
can only be accessed using a password. The American Equities company requires
that a password consist of  8 characters, 5 of which must be letters and
the other 3 digits. The letters and digits can be arranged in any order.


*/

/*
Testing:

rt56AA7q
123actyN
1Lo0Dwa9
myNUM741

the476NEw 
be68moon 
$retrn99 


*/


#include <iostream>



int countLetter(char pass[]);
int countDigits(char pass[]);
bool password(char pass[]);


int main()
{
   


   char passwordN[15];
   do
   {
      std::cout << "Enter a password: ";
      std::cin >> passwordN;

      if (password(passwordN))
      {
         std::cout << "Correct password" << std::endl;
      }
      else
      {
         std::cout << "Incorrect password. Password  has to consist of  8 characters, 5 of which must be letters and the other 3 digits"<<std::endl;
      }

   } while (!password(passwordN));
   

   return 0;
}

/*Function name: password
  Return type: bool
  Parameters : 1 char
  Description: check number of letters, digits and length and invalid character('$'
*/
bool password(char pass[])
{
   int letter;
   int digits;
   int length;

   length = strlen(pass);
   letter = countLetter(pass);
   digits = countDigits(pass);
   for (int i = 0; i < length; i++)
   {
      if (ispunct(pass[i]))
      {
         return false;
      }
   }


   if (letter == 5 && digits == 3 && length == 8)
      return true;
   else
      return false;
}


/*Function name: countLetter
  Return type: int
  Parameters : 1 char
  Description: count number letters in char
*/

int countLetter(char pass[])
{
   int count = 0;
   int length = strlen(pass);
   for (int i = 0; i < length; i++)
   {
      if (isalpha(pass[i]))
         count++;
   }

   return count;

}

/*Function name: countLetter
  Return type: int
  Parameters : 1 char
  Description: count number digits in char
*/

int countDigits(char pass[])
{
   int countD = 0;
   int length = strlen(pass);
   for (int i = 0; i < length; i++)
   {
      if (!isalpha(pass[i]))
         countD++;
   }

   return countD;

}

