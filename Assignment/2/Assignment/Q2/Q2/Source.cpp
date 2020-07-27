#include<iostream>
#include <array>
#include <algorithm>




int getValue();
void sortArray(int* array, int length);
int binarySearch(int* array, int num, int length);
double average(int* array, int length);
double median(int* array, int length);
int mode(int* array, int length);

int main()
{

   int number = getValue();
   int searchNumber;
   int* array = new int[number];
   std::cout << "Enter numbers: " << std::endl;
   for (int i = 0; i < number; i++)
   {
      int numt;
      std::cin >> numt;
      while (numt <= 0) {
         std::cout << "Enter a positive numbers. " << std::endl;
         std::cin >> numt;
      }

      array[i] = numt;
   }
   do
   {
      std::cout << "Enter a number to search in the array: ";
      std::cin >> searchNumber;
      if (searchNumber < 0)
      {
         std::cout << "Enter a positive numbers." << std::endl;
      }
   } while (searchNumber < 0);


   sortArray(array, number);
   int find = binarySearch(array, searchNumber, number);

   double averageN = average(array, number);

   double medianN = median(array, number);

   int modeN = mode(array, number);



   std::cout << "The size of the array: " << number << std::endl;

   std::cout << "The sorted array: " << std::endl;
   for (int i = 0; i < number; i++)
   {
      std::cout << array[i] << std::endl;
   }

   std::cout << "The integer being searched for is " << searchNumber << std::endl;

   if (find != -1)
      std::cout << "The location of that integer is " << find << std::endl;
   else
      std::cout << "The integer is not in the array" << std::endl;

   std::cout << "The average is " << averageN << std::endl;
   std::cout << "The median is " << medianN << std::endl;
   std::cout << "The mode is " << modeN << std::endl;

   delete[] array;
   array = nullptr;




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

void sortArray(int* array, int length)
{
   for (int startIndex = 0; startIndex < length; ++startIndex)
   {
      int smallestIndex = startIndex;
      for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
      {
         if (array[currentIndex] < array[smallestIndex])

            smallestIndex = currentIndex;
      }
      std::swap(array[startIndex], array[smallestIndex]);
   }
}



int binarySearch(int* array, int num, int length)
{

   for (int i = 0; i < length; i++)
   {
      if (array[i] == num)
      {
         return (i + 1);
      }
   }

   return -1;

}


double average(int* array, int length)
{
   int sum = 0;
   int result = 0;
   for (int i = 0; i < length; i++)
   {
      sum += array[i];
   }
   result = (sum / length);

   return result;
}



double median(int* array, int length)
{
   if (length % 2 == 0)
   {
      return (array[length / 2 - 1] + array[length / 2]) / 2;
   }
   return array[(length / 2)];
}



int mode(int* array, int length)
{
   int countMax = 1;
   int firstE = array[0];
   int count = 1;
   for (int i = 0; i < length; i++)
   {
      if (array[i] == array[i - 1])
      {
         count++;
      }
      else
      {
         if (count > countMax)
         {
            countMax = count;
            firstE = array[i - 1];
         }
         count = 1;
      }

   }

   if (count > countMax)
   {
      countMax = count;
      firstE = array[length - 1];
   }


   return firstE;
}