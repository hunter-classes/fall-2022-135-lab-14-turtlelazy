#pragma once

template <typename T> class MyVector {
private:
  T *arr;
  int size

public:
  MyVector();

  void replaceThisMethod(T replaceThisParam);
};

#include "MyVector.tcc"
