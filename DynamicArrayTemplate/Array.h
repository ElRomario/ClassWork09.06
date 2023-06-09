#pragma once
#include <iostream>
template <typename T>
class Array
{
    private:
        T *elements;
        int size;
    public:
    Array(T element, int size);
    Array(const Array<T> &original);
    ~Array()
    {
        delete[] elements;
    }

};
template<typename T>
Array<T>::Array(const Array<T> &original)
{
    T newElements = new T[original.size];
        for (int i = 0; i < original.size; i++)
        {
            newElements[i] = original[i];
        }
        return newElements;

}

