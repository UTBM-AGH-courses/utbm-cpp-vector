//
// Created by valentin on 28/04/2020.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H


class vector {
private:
    int dimension;
    double* coordinates{};

public:
    vector();
    explicit vector(const int &dimension);
    vector(const vector &vector);
    ~vector();
    vector& operator=(const vector &vec);

    double getCoordinates(int pos) const;
    void setCoordinates(int pos, double value);
};


#endif //VECTOR_VECTOR_H
