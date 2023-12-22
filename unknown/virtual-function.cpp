#include<bits/stdc++.h>
using namespace std;

class instrument{
public:
    void play() {
        cout <<"Instruemnt playing...\n";
    }
};
class piano: public instrument{
public:
    void play() {
        cout <<"Piano playing...\n";
    }
};

int  main()
{
    instrument *ob1 = new instrument;
    ob1->play();
    return 0;
}
