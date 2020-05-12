//
// Created by valentin on 28/04/2020.
//

#include <iostream>
#include "vector.h"
template<class T>
vector<T>::vector() : dimension(0), coordinates(nullptr) {}

template<class T>
vector<T>::vector(const int &dimension) : dimension(dimension) {
    coordinates = new double[dimension];
}

template<class T>
vector<T>::vector(const vector<T> &vec) : dimension(vec.dimension) {
    coordinates = new double[dimension];
    for (int i = 0; i < dimension; ++i) {
        coordinates[i] = vec.coordinates[i];
    }
}

template<class T>
vector<T>::~vector() {
    delete[] coordinates;
}

template<class T>
vector<T> &vector<T>::operator=(const vector<T> &vec) {
    delete[] coordinates;
    dimension = vec.dimension;
    coordinates = new double[dimension];
    for (int i = 0; i < dimension; i++) {
        coordinates[i] = vec.coordinates[i];
    }
    return *this;
}

template<class T>
vector<T> vector<T>::operator+(const vector<T> &vec) const {
    if (this->dimension != vec.dimension) {
        throw "Pas les mêmes tailles";
    } else {
        auto sum_array = new double[this->dimension];
        for (int i = 0; i < dimension; i++) {
            sum_array[i] = coordinates[i] + vec.coordinates[i];
        }
        auto new_vector = vector(dimension);
        new_vector.coordinates = sum_array;
        return new_vector;
    }
}

template<class T>
vector<T> vector<T>::operator*(const double u) const {
    auto prod_array = new double[this->dimension];
    for (int i = 0; i < dimension; i++) {
        prod_array[i] = coordinates[i] * u;
    }
    auto new_vector = vector(dimension);
    new_vector.coordinates = prod_array;
    return new_vector;
}

template<class T>
vector<T> &vector<T>::operator++(int) {
    for (int i = 0; i < this->dimension; i++) {
        coordinates[i] += 1;
    }
    return *this;
}

template<class T>
vector<T> vector<T>::operator++() const {
    vector copy(*this);
    for (int i = 0; i < this->dimension; i++) {
        coordinates[i] += 1;
    }
    return copy;
}

template<class T>
vector<T> operator*(double k, const vector<T> &vec) {
    auto prod_array = new double[vec.dimension];
    for (int i = 0; i < vec.dimension; i++) {
        prod_array[i] = vec.coordinates[i] * k;
    }
    auto new_vector = vector(vec.dimension);
    new_vector.coordinates = prod_array;
    return new_vector;
}

template<class T>
double &vector<T>::operator[](int i) {
    return coordinates[i];
}

template<class T>
std::ostream &operator<<(std::ostream &output, const vector<T> &vec) {
    output << "[";
    for (int i = 0; i < vec.dimension; i++) {
        output << vec.coordinates[i];
        if (i != vec.dimension - 1) output << ",";
    }
    output << "]" << std::endl;
    return output;
}

template<class T>
std::istream &operator>>(std::istream &input, vector<T> &vec) {
    std::cout << "Taille du vecteur : ";
    input >> vec.dimension;
    delete[] vec.coordinates;
    for (int i = 0; i < vec.dimension; i++) {
        std::cout << "Coordonées n°" << i << " : ";
        input >> vec.coordinates[i];
    }
    return input;
}

template<class T>
double vector<T>::operator*(const vector<T> &vec) const {
    if (this->dimension != vec.dimension) {
        throw "Pas les mêmes tailles";
    } else {
        auto scalar_product = 0;
        for (int i = 0; i < dimension; i++) {
            scalar_product += coordinates[i] * vec.coordinates[i];
        }
        return scalar_product;
    }
}

template<class T>
vector<T> &vector<T>::operator+=(const vector<T> &vec) {
    if (this->dimension != vec.dimension) {
        throw "Pas les mêmes tailles";
    } else {
        for (int i = 0; i < dimension; i++) {
            coordinates[i] += vec.coordinates[i];
        }
        return *this;
    }
}
