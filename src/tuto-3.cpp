#include<iostream>

void printArray(int* Array, int size)
{
  for(int i = 0;i < size;i++)
      std::cout<< Array[i] << "\n";
}

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

  printArray(fArray, 10);
  return 0;
}