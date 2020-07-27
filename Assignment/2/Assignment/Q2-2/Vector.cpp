#include <iostream>
#include <algorithm>
#include <vector>




int getValue();
void sortArray(std::vector<int>& vector);
int binarySearch(std::vector<int> vector, int num);
double average(std::vector<int> vector);
double median(std::vector<int> vector);
int mode(std::vector<int> vector);

int main()
{

   int number = getValue();
   int searchNumber;

   std::vector<int> vec;
   std::cout << "Enter numbers of elements: " << std::endl;
   for (int i = 0; i < number; i++)
   {
      int numt;
      std::cin >> numt;
      while (numt <= 0) {
         std::cout << "Enter a positive numbers. " << std::endl;
         std::cin >> numt;
      }

      vec.push_back(numt);
   }
   

   sortArray(vec);

   std::cout << "The size of the vector: " << number << std::endl;

   std::cout << "The sorted vector: " << std::endl;
   for (int i = 0; i < number; i++)
   {
      std::cout << vec[i] << std::endl;
   }

   do
   {
      std::cout << "Enter a number to search in the vector: ";
      std::cin >> searchNumber;
      if (searchNumber < 0)
      {
         std::cout << "Enter a positive numbers." << std::endl;
      }
   } while (searchNumber < 0);

   int find = binarySearch(vec, searchNumber);


   std::cout << "The integer being searched for is " << searchNumber << std::endl;

   if (find != -1)
      std::cout << "The location of that integer is " << find << std::endl;
   else
      std::cout << "The integer is not in the array" << std::endl;

   double averageN = average(vec);

   std::cout << "The average is " << averageN << std::endl;

   double medianN = median(vec);

   std::cout << "The median is " << medianN << std::endl;
   
   int modeN = mode(vec);

   std::cout << "The mode is " << modeN << std::endl;

   




   return 0;
}


/*
function get value - user;
number of elements without mistakes
*/
int getValue()


{
   int number;
   do
   {
      std::cout << "Enter the number of elements:  ";

      std::cin >> number;



      if (std::cin.fail())
      {
         std::cin.clear();
         std::cin.ignore(32767, '\n');

         std::cout << "Please try again.\n";
      }
      else
      {
         std::cin.ignore(32767, '\n');

      }

      if (number <= 0)
      {
         std::cout << "Enter number more than 0" << std::endl;
      }

   } while (number <= 0);

   return number;

}

void sortArray(std::vector<int> &vector)

{
   int length = vector.size();
   for (int startIndex = 0; startIndex < length; ++startIndex)
   {
      int smallestIndex = startIndex;
      for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
      {
         if (vector.at(currentIndex) < vector.at(smallestIndex))

            smallestIndex = currentIndex;
      }
      std::swap(vector.at(startIndex), vector.at(smallestIndex));
   }
}



int binarySearch(std::vector<int> vector, const int num)
{
   int length = vector.size()-1;
   int first = 0;
   int last = length;
   int index=-1;
   int mid = (first + last + 1) / 2;

   do
   {
      if (num == vector[mid])
         index = mid;
      else if (num < vector[mid])
      {
         last = mid - 1;
        
      }
      else
         first = mid + 1;

      mid = (first + last + 1) / 2;
   } while ((index == -1) && (first <= last));
   
   return index;

}


double average(std::vector<int> vector)
{
   int length = vector.size();
   int sum = 0;
   int result = 0;
   for (int i = 0; i < length; i++)
   {
      sum += vector[i];
   }
   result = (sum / length);

   return result;
}



double median(std::vector<int> vector)
{
   int length = vector.size();
   if (length % 2 == 0)
   {
      return (vector[length / 2 - 1] + vector[length / 2]) / 2;
   }
   return vector[(length / 2)];
}



int mode(std::vector<int> vector)
{
   int length = vector.size();
   int countMax = 1;
   int firstE = vector[0];
   int count = 1;
   for (int i = 1; i < length; i++)
   {
      if (vector[i] == vector[i - 1])
      {
         count++;
      }
      else
      {
         if (count > countMax)
         {
            countMax = count;
            firstE = vector[i - 1];
         }
         count = 1;
      }

   }

   if (count > countMax)
   {
      countMax = count;
      firstE = vector[length - 1];
   }


   return firstE;
}