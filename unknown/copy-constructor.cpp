#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

class car{
public:
    string name;
    int id, numberofcar;
    int *model;
    car(int id, string name ) {
        this->id = id;
        this->name = name;
        numberofcar = 2;
        model = new int[2];
        model[0] = 102;
        model[1] = 103;
    }
    ~car() {
        delete[]model;
        model = nullptr;
    }
    void get() {
        cout <<id<<" "<<name<<endl;
        for(int i=0; i<numberofcar; i++ ) cout << model[i] <<" ";
        cout <<endl;
    }
    car( const car &original) {
        this->id = original.id;
        name = original.name;
        numberofcar = original.numberofcar;
        model = new int[numberofcar];
        for(int i=0; i<numberofcar; i++ )   model[i] = original.model[i];
    }
};


int  main()
{
    cout <<"Naeem\n";
    car bmw(1, "BMW");
    bmw.get();
    car marcitise = bmw;
    marcitise.get();

    return 0;
}
