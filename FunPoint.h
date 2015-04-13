//
// Created by yiniao on 2015/4/12.
//

#ifndef ALGORITHM_FUNPOINT_H
#define ALGORITHM_FUNPOINT_H

namespace fun {

double f(double x) {
    return 2*x;
}

double sum(double (*d)(double), int n , int m) {
    double result = 0;
    for (int i = n; i <= m; i++)
        result += d(i);
    return result;
}
}

#endif //ALGORITHM_FUNPOINT_H
