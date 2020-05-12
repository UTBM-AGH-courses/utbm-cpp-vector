#include <iostream>
#include "vector.h"

using namespace std;

int main() {
    vector u(2), v(2), w(3);
    u.setCoordinates(0, 10);
    u.setCoordinates(1, 20);
    v.setCoordinates(0, 4);
    v.setCoordinates(1, 9);

    cout << "u=" << u;
    cout << "v=" << v;
    cout << endl;
    cout << "u+=v" << u;
    cout << "u+v=" << u + v;
    cout << "u*v=" << u * v;
    cout << endl;
    cout << "2.0*u=" << 2.0 * u;
    cout << "u*4.0=" << u * 4.0;


    return 0;
}
