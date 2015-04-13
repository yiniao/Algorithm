//
// Created by yiniao on 2015/4/12.
//

#ifndef ALGORITHM_POINTOR_H
#define ALGORITHM_POINTOR_H


#include <string.h>
#include <stdlib.h>
#include <stdio.h>

namespace pointor {

char *strdup(char *n) {
    size_t len = strlen(n) + 1;
    void *s = malloc(len);
    if (s == nullptr) {
        return nullptr;
    }

    return (char *)memcpy(s , n , len);
}

struct Node {
    char *name;
    int  age;

    Node(char *n = " ", int a = 0) {
        name = strdup(n);
        age = a;
    }

    ~Node() {
        if (name != nullptr) {
            free(name);
        }
    }

    Node(const Node& n) {
        name = strdup(n.name);
        age = n.age;
    }

    Node& operator=(const Node& n) {
        cout << "×Ô¶¨Òå" << endl;
        if (this != &n) {
            if (name != nullptr)
                free(name);
            name = strdup(n.name);
            age = n.age;
        }
        return *this;
    }
};

void test() {
    Node node1("chenyixiao", 20);
    Node node2(node1);
    Node node3 = node1;

    strcpy(node2.name, "yichenniao");
    node2.age = 30;

    //strcpy(node3.name, "niaoyichen");
    node3.age = 40;

    cout << node1.name << " " << node1.age
         << " " << node2.name << " " << node2.age
         << " " << node3.name << " " << node3.age << endl;
}

}

#endif //ALGORITHM_POINTOR_H
