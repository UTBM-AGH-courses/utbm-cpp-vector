//
// Created by valentin on 28/04/2020.
//

#include "vector.h"

vector::vector() : dimension(0), coordinates(nullptr) {}

vector::vector(const int &dimension) : dimension(dimension) {
    this->coordinates = new double[dimension];
}

vector::vector(const vector &vec) : dimension(vec.dimension) {
    auto *tab = new double[dimension];
    for (int i = 0; i < dimension; ++i) {
        tab[i] = vec.coordinates[i];
    }
}

vector::~vector() {
    delete[] coordinates;
}

double vector::getCoordinates(int pos) const {
    return this->coordinates[pos];
}

vector &vector::operator=(const vector &vec) {
    return *this;
}

void vector::setCoordinates(int pos, double value) {
    this->coordinates[pos] = value;
}
