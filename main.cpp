#include "MyVector.h"
#include <iostream>
int main(){
    MyVector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    std::cout << "push_back on numbers 0 to 10"
              << "\n";
    std::cout << "The size of the vector is " << vec.size() << "\n";
    std::cout << "The capacity of the vector is " << vec.capacity() << "\n";

    vec.pop_back();
    std::cout << "After pop_back(), the size is " << vec.size() << "\n";
    vec.pop_back(3);
    std::cout << "After pop_back(3), the size is " << vec.size() << "\n";

    std::cout << "Element at index 5 is " <<vec[5] << "\n";

    vec.clear();
    std::cout << "After clear(), the size is " << vec.size() << "\n";

    return 0;
}