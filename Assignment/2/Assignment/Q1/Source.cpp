#include"Paragraph.h"
#include<iostream>


void menu()
{
   std::cout << "String Manipulator" << std::endl;
   std::cout << "--------------------" << std::endl;
   std::cout << "Choose an option: " << std::endl;
   std::cout << "1. Input a paragraph" << std::endl;
   std::cout << "2. Display the paragraph" << std::endl;
   std::cout << "3. Search for word" << std::endl;
   std::cout << "4. Search for letter" << std::endl;
   std::cout << "5. Count words" << std::endl;
   std::cout << "6. Count letter" << std::endl;
   std::cout << "7. Find word and replace it" << std::endl;
   std::cout << "8. Find letter and replace it" << std::endl;
   std::cout << "9. Frequency of each letter within the paragraph" << std::endl;
   std::cout << "10.Exit" << std::endl;

  

}

int main()
{
   char searchLetter;
   std::string searchWord;

   Paragraph_Analysis New("There was a long way to find you");

   menu();
   int option;
   std::cin >> option;

   do {

      switch (option)
      {
      case 1:
      {
         std::string  parag;
         std::cout << "Enter a paragraph (up to 500 letters)  :" << std::endl;
         for (int i = 0; i < 500; i++)
         {
            if (parag[i] != '\x0A' || parag[i] != '\x0D')
            {
               std::cin >> parag[i];
            }
            
         }
         New.setString(parag);
         break;
      }

   case2:
      {
         std::cout << "The paragraph: " << std::endl;
         std::cout << New.getString() << std::endl;
         break;
      }
   case3:
      {

         std::cout << "What word do you want to find?" << std::endl;
         std::getline(std::cin, searchWord);
         New.SearchWord(searchWord);

      }
   case4:
      {
         std::cout << "What letter do you want to find?" << std::endl;
         std::cin >> searchLetter;
         New.SearchLetter(searchLetter);
      }

   case5:
      {
         std::cout << "There are " << New.WordCount() << "words" << std::endl;
      }

   case6:
      {
         std::cout << "There are " << New.LetterCount()<< "letters" << std::endl;
      }
   case7:
      {
         std::string searchWord, replaceWord;
         std::cout << "What word do you want to find?" << std::endl;
         std::cin >> searchWord;
         std::cout << "What word do you want to replace?" << std::endl;
         std::cin >> replaceWord;
         New.FindReplaceWord(searchWord, replaceWord);
      }
   case8:
      {
         char search, replace;
         std::cout << "What letter do you want to find?" << std::endl;
         std::cin >> search;
         std::cout << "What letter do you want to replace?" << std::endl;
         std::cin >> replace;
         New.FindReplaceLetter(search, replace);
      }
   case9:
      {

      }
   case10:
      {

      }

      }

   } while (option != 11);

   

   


}