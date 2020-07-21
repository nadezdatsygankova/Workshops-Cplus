#include"Paragraph.h"
#include<iostream>
#include <algorithm>
#include<map>

Paragraph_Analysis::Paragraph_Analysis() :paragraph("")
{

}
Paragraph_Analysis::Paragraph_Analysis(std::string newParagraph) : paragraph(newParagraph)
{

}

void Paragraph_Analysis::setString(std::string newParagraph)
{
   paragraph = newParagraph;

}
std::string Paragraph_Analysis::getString() const
{
   return paragraph;
}


void Paragraph_Analysis::SearchWord()
{
   std::string baseFile, searchWord;
   baseFile = getString();
  
   std::cout << "What word do you want to find?" << std::endl;
   std::cin.ignore();
   std::getline(std::cin, searchWord);
   if (baseFile.find(searchWord) != std::string::npos)
   {
      std::cout << "The word is in " << baseFile.find(searchWord) << " positon." << std::endl;
   }

   else
      std::cout << "Does not contain this word";
     

}
void Paragraph_Analysis::SearchLetter(char searchLetter)
{
   
   std::string baseFile;
   baseFile = getString();
   
   if (baseFile.find(searchLetter) != std::string::npos)
   {
      std::cout << "The letter is in " << baseFile.find(searchLetter) << " positon." << std::endl;
   }

   else
      std::cout << "Does not contain this word";
}

int Paragraph_Analysis::length()
{
   std::string len = getString();
   return  len.length();
}
int Paragraph_Analysis::WordCount()
{
   std::string par = getString();
 
   int count=0;
   for (int i = 0; i < par.length(); i++)
   {
      if (par[i] == ' ')
      {
         count = count + 1;
      }
      
   }
   return count+1;
}
int Paragraph_Analysis::LetterCount()
{
   std::string par = getString();
  // char ch[10];
   int count = 0;
   for (int i = 0; i < length(); i++)
   {
      if ((par[i] >= 'a' && par[i] <= 'z') || (par[i] >= 'A' && par[i] <= 'Z'))
      {
         count = count + 1;
      }

   }
   return count;
   
}
void Paragraph_Analysis::FindReplaceWord(std::string searchWord, std::string replaceWord)
{
  
   
   std::string baseFile;
   baseFile = getString();
   auto position = baseFile.find(searchWord);
   if (position == std::string::npos)
   {
      std::cout << "Word was not found" << std::endl;
   }
   else
   {
      //while (position != std::string::npos)
      {
         baseFile.replace(position, searchWord.size(), replaceWord);
         position += replaceWord.length();
      }
   }
   setString(baseFile);

}



void Paragraph_Analysis::FindReplaceLetter(char search, char replace)
{
   std::string baseFile;
   baseFile = getString();
   int coun = 0;
   for (int i = 0; i < length(); i++)
   {
      if (baseFile[i] == search)
      {
         baseFile[i] = replace;
         coun++;
      }   
   }

   if (coun == 0)
   {
      std::cout << "Does not contain this letter" << std::endl;
   }
  
   setString(baseFile);

}

void Paragraph_Analysis::Summary()
{
   std::string baseFile;
   baseFile = getString();

  // int symbols[26];
   
 // int number = 0;

  std::map<char, int> m;
  for (int i = 0; i < baseFile.length(); i++) {
     m[baseFile[i]]++;
  }

  std::cout << "\nfrequency of each letter :" << std::endl;
  std::map<char, int>::iterator iter;
  for (iter = m.begin(); iter != m.end(); iter++) {
     if ((*iter).first == 0)continue;
     {
        std::cout <<"( "<<(*iter).first << " : " << (*iter).second<<")" << std::endl;
     }
     
  }
 




}