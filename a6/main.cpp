#include <iostream>
#include "Vector.hpp"

void printVector(const Vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Resource Management!" << std::endl;
    Vector<int> v1;
    v1.pushBack(1);
    v1.pushBack(2);
    v1.pushBack(3);
    v1.pushBack(4);
    v1.pushBack(5);
    //std::cout << v1.capacity() <<std::endl;
    
    //v1.popBack();

    Vector<int> v2;
    v2 = v1;
    v1.pushBack(6);
    v2.pushBack(7);
    
    
    
    printVector(v1);
    printVector(v2);
    

    return 0;
}
