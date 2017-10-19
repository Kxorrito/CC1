#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

using namespace std;

class complejo
{
    private:
        int x;
        int z;
    public:
        complejo();
        complejo(int a, int b);

        complejo sum(complejo a);
        bool igual(complejo a);
        void multi(int i);
        void print();
};

#endif // COMPLEJO_H
