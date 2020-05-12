#include <iostream>
#include "vector.h"
using namespace std;

int main() {
    vector u(1), u2(2), v, w, y, z, a;
    u.setCoordinates(0, 10);
    cout << "u[0]=" << u[0] << endl;
    v = u;
    cout << "v[0]=" << v[0] << endl;
    w = v + u;
    cout << "w[0]=" << w[0] << endl;
    y = v*3;
    cout << "y[0]=" << y[0] << endl;
    z = 4*v;
    cout << "z[0]=" << z[0] << endl;
    a = u++;
    cout << "a[0]=" << a[0]<< endl;

    cout << u << endl ;

    return 0;
}
