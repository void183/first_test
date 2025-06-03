#include <iostream>
using namespace std;
class animal{
public:    
    string sound;
    int age;
    animal(const string& s =" ", int a = 0) : sound(s), age(a) {}
    void print(){
        cout << sound;
    }
};
class lion:public animal{
    public:
        lion() : animal("rrrrr", 17) {};
};
class cow : public animal{
    public:
        cow() : animal("moo", 15) {};
};
int main() {
  cow c1;
    c1.print();
    cout << endl;
 lion c2;
    c2.print();
}
