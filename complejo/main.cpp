#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{
    complejo a(6,10);
    complejo b(9,7);
    a.sum(b);
    a.print();

    return 0;
}
