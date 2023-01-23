#include <iostream>

template<typename T>
MyVector<T>::MyVector()
{
    arr_size = 0;
    arr_capacity = 10;
    arr = new T(10);
}

template <typename T>
int MyVector<T>::size()
{
    return arr_size;
}
template <typename T>
int MyVector<T>::capacity()
{
    return arr_capacity;
}

template<typename T>
void MyVector<T>::push_back(T object) {

    //resizes in case of low capacity
    if (arr_size >= arr_capacity)
    {
        T *new_arr = new T[arr_capacity * 2];
        for (int i = 0; i < arr_size; i++)
        {
            new_arr[i] = arr[i];
        }

        delete [] arr;
        arr = NULL;
        arr = new_arr;
        arr_capacity *= 2;
    }
    //adds element
    arr[arr_size] = object;
    arr_size++;
}

template <typename T>
void MyVector<T>::clear()
{
    arr_size = 0;
}

template <typename T>
T &MyVector<T>::operator[](int index)
{
    if (index >= arr_size || index < 0)
    {
        throw std::out_of_range("Given index is out of range");
    }

    return arr[index];
}

template <typename T>
void MyVector<T>::pop_back()
{
    arr_size --;
}

template <typename T>
void MyVector<T>::pop_back(int n)
{
    arr_size -= n ;
}