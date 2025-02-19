#include <iostream>

int & get_int_ref()
{
  static int i = 2023;
  return i;
}

void swap(int *n1, int * n2)
{
  int tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
}

void swap_ref(int &n1, int &n2)
{
  int tmp = n1;
  n1 = n2;
  n2 = tmp;
}

int main() {
  // c pointer
  int n1 = 100;
  int * pn1 = &n1;
  std::cout << "n1 = " << n1 << std::endl;
  std::cout << "pn1 = " << pn1 << std::endl;
  std::cout << "*pn1 = " << *pn1 << std::endl << std::endl;

  // c++ references
  int i = 200;
  int & ri = i;
  std::cout << "i = " << i << std::endl;
  std::cout << "ri = " << ri << std::endl;
  i++;
  std::cout << "i = " << i << std::endl;
  std::cout << "ri = " << ri << std::endl;
  ri++;
  std::cout << "i = " << i << std::endl;
  std::cout << "ri = " << ri << std::endl << std::endl;

  // the above using c pointers
  int a = 300;
  int * pa = &a;
  std::cout << "a = " << a << std::endl;
  std::cout << "*pa = " << *pa << std::endl;
  a++;
  std::cout << "a = " << a << std::endl;
  std::cout << "*pa = " << *pa << std::endl;
  a++;
  std::cout << "a = " << a << std::endl;
  std::cout << "*pa = " << *pa << std::endl << std::endl;

  // pass pointers to a function
  int x = 100;
  int y = 200;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  swap(&x, &y);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl << std::endl;

  // pass references to a function
  int x1 = 100;
  int y1 = 200;
  int &rx1 = x1;
  int &ry1 = y1;
  std::cout << "x1 = " << x1 << std::endl;
  std::cout << "y1 = " << y1 << std::endl;
  swap_ref(rx1, ry1);
  std::cout << "x1 = " << x1 << std::endl;
  std::cout << "y1 = " << y1 << std::endl;

  int & ref_int = get_int_ref();
  std::cout << ref_int << std::endl;
  
}