#include<iostream>

int main()
{
  int* ptr;
  int aNum = -99;
  std::cout << aNum << std::endl;
  ptr = &aNum;
  std::cout << *ptr << std::endl;

  int fArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << fArray[9] << "\n";

  ptr = fArray;
  std::cout << ptr[9] << "\n";

  std::cout << fArray+2 << "\n";
  std::cout << ptr+2 << "\n";
  return 0;
}