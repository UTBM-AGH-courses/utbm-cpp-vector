#include <iostream>
#include "vector.h"

int main() {
    vector u(1), u2(2), v, w, y, z, a;
    u.setCoordinates(0, 10);
    std::cout << "u[0]=" << u.getCoordinates(0) << std::endl;
    v = u;
    std::cout << "v[0]=" << v.getCoordinates(0) << std::endl;
    w = v + u;
    std::cout << "w[0]=" << w.getCoordinates(0) << std::endl;
    y = v*3;
    std::cout << "y[0]=" << y.getCoordinates(0) << std::endl;
    z = 4*v;
    std::cout << "z[0]=" << z.getCoordinates(0) << std::endl;
    a = u++;
    std::cout << "a[0]=" << a.getCoordinates(0) << std::endl;
    return 0;
}
