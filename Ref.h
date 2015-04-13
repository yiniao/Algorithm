//
// Created by yiniao on 2015/4/12.
//

#ifndef ALGORITHM_REF_H
#define ALGORITHM_REF_H

#include <iostream>

using namespace std;

namespace ref {

class Ref {
public:
    int& getRefN() {  //int& ÆÆ»µ·â×°
        return n;
    }

    int getN() {
        return n;
    }

private:
    int n;
};

void test() {
    Ref r;
    r.getRefN() = 9;
    cout << r.getN() << endl;
}
}

#endif //ALGORITHM_REF_H
