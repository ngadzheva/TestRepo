#include <iostream>

const double PI = 3.14;
const int MAX_SIZE = 25;

/**
*
* Returns the area of square or rectangular
*
* @param side1 - width of the square or the rectangular
* @param side2 - height of the square or the rectangular
*
* @return the area of the square or the rectangular
*
**/
double getArea(double side1, double side2) 
{
  // double area = side1 * side2;

  // // std::cout << area;

  // return area;

  return side1 * side2;
}

bool isValidSide(double side)
{
  // bool isValid;

  // if (side > 0.0 && side < 40.0)
  // {
  //   isValid = true;
  // }
  // else
  // {
  //   isValid = false;
  // }
  
  // return isValid;

  return side > 0.0 && side < 40.0;
}

int main() 
{
  int a = 10;
  char k = 'p';

  double square_area = getArea(2.25, 1.36);
  std::cout << square_area;

  int rectangularArea;

  // int length = strlen(str) - 1;

  // for (int i = 0; i < size; ++i) {
  //   std::cout << arr[i];
  // }

  // for (int i = 0; i < length; ++i)
  // {
  //   if (condition) {
  //     // true condition logic
  //   }

  //   // logic
  // }

  return 0;
}
