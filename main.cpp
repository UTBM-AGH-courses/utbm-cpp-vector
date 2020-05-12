#include <iostream>
#include "vector.h"

using namespace std;

int main() {
    vector u(2), v(2), w(3);
    u.setCoordinates(0, 10);
    u.setCoordinates(1, 20);
    v.setCoordinates(0, 4);
    v.setCoordinates(1, 9);

    cout << "w=" << w;

    return 0;
}
