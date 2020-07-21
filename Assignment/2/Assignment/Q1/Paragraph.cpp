#include"Paragraph.h"
#include<iostream>
#include <algorithm>

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


void Paragraph_Analysis::SearchWord(std::string searchWord)
{
   std::string baseFile;
   baseFile = getString();
  
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
   char ch[10]="";
   int count=0;
   for (int i = 0; i < length(); i++)
   {
      if (par[i] == ch[i])
      {
         count = count + 1;
      }
      
   }
   return count;
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
   if (position != std::string::npos)
   {
      baseFile.replace(position, searchWord.size(), replaceWord);
   }
  
}

//I am not sure for this function, maybe we shoud use swap function 

void Paragraph_Analysis::FindReplaceLetter(char search, char replace)
{
   std::string baseFile;
   baseFile = getString();
   for (int i = 0; i < length(); i++)
   {
      if (baseFile[i] == search)
      {
         baseFile[i] = replace;
      }
   }


}

void Paragraph_Analysis::Summary()
{
   std::string baseFile;
   baseFile = getString();

   int symbols[26];
   
  int number = 0;

  for (int i = 0; i < 26; i++)
     symbols[i] = 0;
  for (int i = 0; i < length(); i++)
  {
     number = -1;
     if (baseFile[i] >= 'a' && baseFile[i] <= 'z')
        number = baseFile[i] - 'a';
     if (baseFile[i] >= 'A' && baseFile[i] <= 'Z')
        number = baseFile[i] - 'A';
     if (number >= 0)
        symbols[number] ++;
  }

  for (int i = 0; i < 26; i++)
  {
     if (symbols[i] > 0)
        std::cout <<  'A' + i <<" "<< symbols[i];
  }
  /*
   for (int i = 0; i < length(); i++)
   {
      
       /*  if (baseFile[i] >= 'à' && baseFile[i] <= 'z')
            symbols[(int)baseFile[i] - 'à']++;
      if (baseFile[i] >= 'À' &&
         baseFile[i] <= 'Z')
         symbols[baseFile[i] - 'À']++;
   }


   for (int j = 0; j < 26; j++)
      std::cout << (char)(j + 'À') << "\t" << symbols[j] << std::endl;*/



}