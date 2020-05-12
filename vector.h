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
    vector operator+(const vector &vec) const;
    vector& operator+=(const vector &vec);
    vector& operator++(int); // pré-incrémentation k++
    vector operator++() const; // post-incrémenation ++k
    vector operator*(const double k) const;
    double operator*(const vector&) const;

    double& operator[](int);

    friend vector operator*(double k, const vector &vec);
    friend std::ostream &operator<<(std::ostream &output, const vector &vec);
    friend std::istream &operator>>(std::istream &input, vector &vec);

    [[nodiscard]] inline double getCoordinates(int pos) const {return this->coordinates[pos];};
    inline void setCoordinates(int pos, double value){this->coordinates[pos] = value;};
};


#endif //VECTOR_VECTOR_H
