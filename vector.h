//
// Created by valentin on 28/04/2020.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#include <iostream>

class vector {
private:
    int dimension;
    double* coordinates{};

public:
    vector();
    explicit vector(const int &dimension);
    vector(const vector &vector);
    ~vector();

    vector& operator=(const vector &vector);
    vector operator+(const vector &vec);
    vector& operator++(int k);
    vector operator*(double k);

    friend vector operator*(double k, const vector &vec);

    double& operator[](int);
    friend std::ostream &operator<<(std::ostream &output, const vector &vec);

    double getCoordinates(int pos) const;
    void setCoordinates(int pos, double value);
};


#endif //VECTOR_VECTOR_H
