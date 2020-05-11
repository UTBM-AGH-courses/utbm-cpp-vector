#include <iostream>
#include "vector.h"

int main() {
    vector vec1(5);
    vec1.setCoordinates(0, 10.0);
    std::cout << vec1.getCoordinates(0) << std::endl;
    return 0;
}
