#include<bits/stdc++.h>
using namespace std;


class car{
public:
    virtual void test() {
        cout <<"Test\n";
    }
};
class vmw:public car{
public:
    void test() {
        cout <<"vmw\n";
    }
};


int  main()
{
    car ob1;
    vmw ob2;
    car *t = &ob2;
    t -> test();
    return 0;
}

