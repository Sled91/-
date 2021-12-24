#include <iostream>
using namespace std;

class test {
private:
    int a, b, c;
public:
    void set(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void get() {
        cout << "A= " << a << ", B= " << b << ", C= " << c;
    }
};
int main()
{
    test Test;
    Test.set(1, 20, 13);
    Test.get();

}

