//
// Created by yiniao on 2015/4/10.
//

#include "IntSLLNode.h"

IntSLList::~IntSLList() {
    for (IntSLLNode *p; !isEmpty();) {
        p = head->next;
        delete head;
        head = p;
    }
}

void IntSLList::addToHead(int i) {
    head = new IntSLLNode(i, head);
    if (tail == nullptr)
        tail = head;
}

void IntSLList::addToTail(int i) {
    if (tail != nullptr) {
        tail->next = new IntSLLNode(i);
        tail = tail->next;
    }
    else head = tail = new IntSLLNode(i);
}

int IntSLList::deleteFromHead() {
    int i = head->info;
    IntSLLNode *tmp = head;
    if (head == tail) {
        head = tail = nullptr;
    }
    else {
        head = head->next;
    }
    delete tmp;
    return i;
}

int IntSLList::deleteFromTail() {
    int i = tail->info;
    if (head == tail) {
        delete head;
        head = tail = nullptr;
    }
    else {
        IntSLLNode *tmp;
        for (tmp = head; tmp->next != tail; tmp = tmp->next);
        delete tail;
        tail = tmp;
        tail->next = nullptr;
    }
    return i;
}

void IntSLList::deleteNode(int i) {
    if (head != nullptr) {
        if (head == tail && i == head->info) {
            delete head;
            head = tail = nullptr;
        }
        else if (i == head->info) {
            IntSLLNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        else {
            IntSLLNode *pred, *tmp;
            for (pred = head, tmp = head->next;
                    tmp != nullptr && !(tmp->info == i);
                    pred = pred->next, tmp = tmp->next);
            if (tmp != nullptr) {
                pred->next = tmp->next;
                if (tmp == tail)
                    tail = pred;
                delete tmp;
            }
        }
    }
}

bool IntSLList::isInList(int i) const {
    IntSLLNode *tmp;
    for (tmp = head; tmp != nullptr && !(tmp->info == i); tmp = tmp->next);
    return tmp != nullptr;
}
