//
// Created by yiniao on 2015/4/11.
//

#ifndef ALGORITHM_DLLNODE_H
#define ALGORITHM_DLLNODE_H

template <class T>
class DLLNode {
public:
    T info;
    DLLNode *prev, *next;

    DLLNode() {
        prev = next = nullptr;
    }

    DLLNode(const T& el, DLLNode *n = nullptr, DLLNode *p = nullptr) {
        info = el;
        prev = p;
        next = n;
    }
};


#endif //ALGORITHM_DLLNODE_H
