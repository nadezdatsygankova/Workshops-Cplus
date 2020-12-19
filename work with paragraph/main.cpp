#include"Paragraph.h"
#include<iostream>
#include <string>

void menu()
{
   std::cout << "\n\nString Manipulator" << std::endl;
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

   
   int option;
  
   int size = 500;

   do {
      menu();
      std::cin >> option;
      switch (option)
      {
      case 1:
      {
         std::string  parag;
         std::cout << "Enter a paragraph (up to 500 letters)  :" << std::endl;
         std::cin.ignore();
         getline(std::cin, parag);
         New.setString(parag);
         break;
      }

   case 2:
      {
         std::cout << "The paragraph: " << std::endl;
         std::cout << New.getString() << std::endl;
         break;
      }
   case 3:
      {
         New.SearchWord();
         break;

      }
   case 4:
      {
         std::cout << "What letter do you want to find?" << std::endl;
         std::cin.ignore();
         std::cin >> searchLetter;
         New.SearchLetter(searchLetter);
         break;
      }

   case 5:
      {
         std::cout << "There are " << New.WordCount() << " words" << std::endl;
         break;
      }

   case 6:
      {
         std::cout << "There are " << New.LetterCount()<< " letters" << std::endl;
         break;
      }
   case 7:
      {
         std::string searchWord, replaceWord;
         std::cout << "What word do you want to find?" << std::endl;
         std::cin.ignore();
         std::cin >> searchWord;
         std::cout << "What word do you want to replace?" << std::endl;
         std::cin.ignore();
         std::cin >> replaceWord;
         New.FindReplaceWord(searchWord, replaceWord);
         std::cout <<"New paragraph: \n"<< New.getString() << std::endl;
         break;
      }
   case 8:
      {
         char search, replace;
         std::cout << "What letter do you want to find?" << std::endl;
         std::cin >> search;
         std::cout << "What letter do you want to replace?" << std::endl;
         std::cin >> replace;
         New.FindReplaceLetter(search, replace);
         std::cout << "New paragraph: \n" << New.getString()<<std::endl;
         break;
      }
   case 9:
      {
         std::cout << "Summary of frequency of each letter within the paragraph" << std::endl;
         New.Summary();
         break;
      }
   case 10://exit program
      {
         std::cout << "Thank you for using this program!" << std::endl;
         break;
      }

      default:
         std::cout << "Invalid input" << std::endl;

      }

   } while (option != 10);

   

   
   return 0;

}
