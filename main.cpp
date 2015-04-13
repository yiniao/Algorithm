#include <iostream>
#include <math.h>

#include "Base.h"
#include "Pointor.h"
#include "Ref.h"
#include "FunPoint.h"


using namespace std;



int main() {
    //ref::test();
    cout << fun::sum(sin, 1, 5);
    return 0;
}