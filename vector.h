//
// Created by valentin on 28/04/2020.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#include <iostream>

template <class T> class vector {
private:
    int dimension;
    T* coordinates{};

public:
    vector<T>();
    explicit vector<T>(const int &dimension);
    vector<T>(const vector &vec);
    ~vector<T>();

    vector<T>& operator=(const vector<T> &vec);
    vector<T> operator+(const vector<T> &vec) const;
    vector<T>& operator+=(const vector<T> &vec);
    vector<T>& operator++(int); // pré-incrémentation k++
    vector<T> operator++() const; // post-incrémenation ++k
    vector<T> operator*(double k) const;
    double operator*(const vector<T>&) const;

    double& operator[](int);

    friend vector<T> operator*(double k, const vector<T> &vec);
    friend std::ostream &operator<<(std::ostream &output, const vector<T> &vec);
    friend std::istream &operator>>(std::istream &input, vector<T> &vec);

    [[nodiscard]] inline double getCoordinates(int pos) const {return this->coordinates[pos];};
    inline void setCoordinates(int pos, double value){this->coordinates[pos] = value;};
};


#endif //VECTOR_VECTOR_H
