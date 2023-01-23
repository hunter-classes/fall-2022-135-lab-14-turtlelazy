#pragma once

template <typename T> class MyVector {
private:
    T *arr;
    int arr_size;
    int arr_capacity;

public:
    MyVector();
    T &operator[](int);
    int size();
    int capacity();
    bool empty();
    void push_back(T item);
    void pop_back(int n);
    void pop_back();   
    void clear();
    //void replaceThisMethod(T replaceThisParam);
};

#include "MyVector.tcc"
