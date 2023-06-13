//
// Created by ivan on 13.06.23.
//

#ifndef UNTITLED59_ARRAY_H
#define UNTITLED59_ARRAY_H

#include <iostream>
#include <exception>

template<size_t N, class T>
class Array {
private:
    size_t size;
    T array[N];
public:
    Array() : size(N) {}

    Array(T init) : size(N) {
        for (auto &i: array)
            i = init;
    }

    Array(std::initializer_list<T> a) : size(N) {
        for (int i = 0; i < size; i++)
            array[i] = *(a.begin() + i);
    }

    size_t get_size() const {
        return size;
    }

    void fill(T value) {
        for (auto &i: array)
            i = value;
    }

    const T &operator[](size_t ind) const {
        if (ind < size)
            return array[ind];
        std::cout << "Index is invalid" << std::endl;
        throw std::out_of_range("Invalid index");
    }

    T &operator[](size_t ind) {
        if (ind < size)
            return array[ind];
        std::cout << "Index is invalid" << std::endl;
        throw std::out_of_range("Invalid index");
    }

    const T &front() const {
        if (size != 0)
            return array[0];
        throw std::out_of_range("Invalid value");
    }

    T &front() {
        if (size != 0)
            return array[0];
        throw std::out_of_range("Invalid value");
    }

    T &back() {
        if (size != 0)
            return array[size - 1];
        throw std::out_of_range("Invalid value");
    }

    const T &back() const {
        if (size != 0)
            return array[size - 1];
        throw std::out_of_range("Invalid value");
    }

    bool empty() {
        return size == 0;
    }

    friend std::ostream &operator<<(std::ostream &os, Array a) {
        for (auto i: a.array)
            std::cout << i << ' ';
        std::cout << std::endl;
    }
};


#endif //UNTITLED59_ARRAY_H
