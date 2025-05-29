#include <iostream>
#include <vector>

using namespace std;



namespace MySpace{
    void print(){
        cout << "Hello"<<endl;
    }   

    class MyObj{
        int a;
    };
}

namespace MySpace2{
    namespace Inner{
        void f(){
            cout << 'f'<<endl;
        }
    }
    void print(){
        cout << "Hello"<<endl;
    }   
}

int main()
{
    MySpace::print();
    MySpace::MyObj obj;
    MySpace2::print();
    MySpace2::Inner::f();
}
