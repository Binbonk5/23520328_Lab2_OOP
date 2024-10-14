#include "bai8.h"

List::List() : arr(nullptr), size(0) {}

List::~List() {
    delete[] arr;
}

void List::Add(double value) {
    double* newArr = new double[size + 1];
    for (unsigned int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = value;
    delete[] arr;
    arr = newArr;
    ++size;
}

void List::RemoveFirst(double value) {
    for (unsigned int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            for (unsigned int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            --size;
            break;
        }
    }
}

void List::RemoveAll(double value) {
    unsigned int newSize = size;
    for (unsigned int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            --newSize;
        }
    }
    double* newArr = new double[newSize];
    unsigned int index = 0;
    for (unsigned int i = 0; i < size; ++i) {
        if (arr[i] != value) {
            newArr[index++] = arr[i];
        }
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
}

void List::Replace(int index, double value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}

void List::Print() {
    cout << "[";
    for (unsigned int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

