#include<iostream>

int doubleNumber(int n)
{
   return 2* n;
}

int main()
{
   int n = 5;

   std::cout << "Please enter a number: ";
   std::cin >> n;
   std::cout << doubleNumber(n);
   return 0;
}
