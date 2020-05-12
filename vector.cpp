//
// Created by valentin on 28/04/2020.
//

#include <iostream>
#include "vector.h"

vector::vector() : dimension(0), coordinates(nullptr) {}

vector::vector(const int &dimension) : dimension(dimension) {
    this->coordinates = new double[dimension];
}

vector::vector(const vector &vector) : dimension(vector.dimension) {
    this->coordinates = new double[dimension];
    for (int i = 0; i < dimension; ++i) {
        this->coordinates[i] = vector.coordinates[i];
    }
}

vector::~vector() {
    delete[] coordinates;
}

vector &vector::operator=(const vector &vector) {
    delete[] coordinates;
    this->dimension = vector.dimension;
    this->coordinates = new double[dimension];
    for (int i = 0; i < dimension; i++) {
        this->coordinates[i] = vector.coordinates[i];
    }
    return *this;
}

vector vector::operator+(const vector &vec) const {
    if (this->dimension != vec.dimension) {
        throw "Pas les mêmes tailles";
    } else {
        auto sum_array = new double[this->dimension];
        for (int i = 0; i < dimension; i++) {
            sum_array[i] = this->coordinates[i] + vec.coordinates[i];
        }
        auto new_vector = vector(this->dimension);
        new_vector.coordinates = sum_array;
        return new_vector;
    }
}

vector vector::operator*(const double u) {
    auto prod_array = new double[this->dimension];
    for (int i = 0; i < dimension; i++) {
        prod_array[i] = this->coordinates[i] * u;
    }
    auto new_vector = vector(this->dimension);
    new_vector.coordinates = prod_array;
    return new_vector;
}

vector& vector::operator++(int) {
    for (int i = 0; i < this->dimension; i++) {
        this->coordinates[i] += 1;
    }
    return *this;
}

vector vector::operator++() const {
    vector copy(*this);
    for (int i = 0; i < this->dimension; i++) {
        this->coordinates[i] += 1;
    }
    return copy;
}

vector operator*(double k, const vector &vec) {
    auto prod_array = new double[vec.dimension];
    for (int i = 0; i < vec.dimension; i++) {
        prod_array[i] = vec.coordinates[i] * k;
    }
    auto new_vector = vector(vec.dimension);
    new_vector.coordinates = prod_array;
    return new_vector;
}

double &vector::operator[](int i) {
    return this->coordinates[i];
}

std::ostream &operator<<(std::ostream &output, const vector &vec) {
    output << "[";
    for (int i = 0; i < vec.dimension; i++) {
        output << vec.coordinates[i];
        if (i != vec.dimension - 1) output << ",";
    }
    output << "]" << std::endl;
    return output;
}

std::istream &operator>>(std::istream &input, vector &vec) {
    std::cout << "Taille du vecteur : ";
    input >> vec.dimension;
    delete[] vec.coordinates;
    for (int i = 0; i < vec.dimension; i++) {
        std::cout << "Coordonées n°" << i << " : ";
        input >> vec.coordinates[i];
    }
    return input;
}
