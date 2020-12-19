#pragma once
#include <string>

class Paragraph_Analysis
{
public:
   Paragraph_Analysis();
   Paragraph_Analysis(std::string newParagraph);
   void setString(std::string newParagraph);
   std::string getString() const;
   int length();

   void SearchWord();
   void SearchLetter(char searchLetter);
   
   int WordCount();
   int LetterCount();
   void FindReplaceWord(std::string searchWord, std::string replaceWord);
   void FindReplaceLetter(char search, char replace);
   void Summary();

private:
   std::string paragraph{};
};
