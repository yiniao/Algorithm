//
// Created by yiniao on 2015/4/12.
//

#ifndef ALGORITHM_BASE_H
#define ALGORITHM_BASE_H

#include <iostream>

using namespace std;

class BaseClass {
public:
    BaseClass() {}

    void f(char *s = "unknown") {
        cout << "Function f() in BaseClass called from " << s << endl;
        h();
    }

protected:
    void g(char *s = "unknown") {
        cout << "Function g() in BaseClass called from " << s << endl;
    }

private:
    void h() {
        cout << "Function h() in BaseClass\n";
    }
};

class Derived1Level1 : public virtual BaseClass {
public:
    void f(char *s = "unknown") {
        cout << "Function f() in Derived1Level1 called from " << s << endl;
        g("Derived1Level1");
        h("Derived1Level1");
    }

    void h(char *s = "unknown") {
        cout << "Function h() in Derived1Level1 called from " << s << endl;
    }
};

class Derived2Level1 : public virtual BaseClass {
public:
    void f(char *s = "unknown") {
        cout << "Function f() in Derived2Level1 called from " << s << endl;
        g("Derived2Level1");
//      h();   //error : BaseClass::h() is not accessible
    }
};

class DerivedLevel2 : public Derived1Level1, public Derived2Level1 {
public:
    void f(char *s = "unknown") {
        cout << "Function f() in DerivedLevel2 called from " << s << endl;
        g("DerivedLevel2");
        Derived1Level1::h("DerivedLevel2");
        BaseClass::f("DerivedLevel2");
    }
};


void test() {
    BaseClass bc;
    Derived1Level1 d1l1;
    Derived2Level1 d2l1;
    DerivedLevel2 dl2;

    //bc.f("main(1)");
    //bc.g();  //error
    //bc.h();  //error
    /*d1l1.f("main(2)");
    d1l1.h("main(3)");
    d2l1.f("main(4)");*/
    dl2.h("main(5)");
}

#endif //ALGORITHM_BASE_H
