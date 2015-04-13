//
// Created by yiniao on 2015/4/10.
//

#ifndef ALGORITHM_INTSLLNODE_H
#define ALGORITHM_INTSLLNODE_H


#include <stddef.h>

class IntSLLNode {
public:
    int info;
    IntSLLNode *next;

    IntSLLNode() {
        next = nullptr;
    }
    IntSLLNode(int i, IntSLLNode *in = nullptr) {
        info = i;
        next = in;
    }
};

class IntSLList {
public:
    IntSLList() {
        head = tail = nullptr;
    }

    ~IntSLList();

    int isEmpty() {
        return head == nullptr;
    }

    void addToHead(int);
    void addToTail(int);
    int deleteFromHead();
    int deleteFromTail();
    void deleteNode(int);
    bool isInList(int) const;

private:
    IntSLLNode *head;
    IntSLLNode *tail;
};


#endif //ALGORITHM_INTSLLNODE_H
