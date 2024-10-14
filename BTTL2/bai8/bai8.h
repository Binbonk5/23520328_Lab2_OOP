#ifndef BAI8_H
#define BAI8_H

#include <iostream>
using namespace std;

class List {
private:
    double* arr;
    unsigned int size;

public:
    List();
    ~List();
    void Add(double value);
    void RemoveFirst(double value);
    void RemoveAll(double value);
    void Replace(int index, double value);
    void Print();
};

#endif // BAI8_H
