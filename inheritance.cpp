#include <iostream>

using namespace std;

class first {
protected:              //переменные доступны только в этом классе и будут доступны в наседуемом классе
    int val;

    first (int val) {
        this->val = val;
        cout << val;
    }
};

class second: public first { //полностью наследует из класса first
public:
    second(int value):first(value) {}
};

class third : public first{ //полностью наследует из класса first
public:
    third(int value) :first(value) {}
        };
int main()
{
    second obj(1);
    third object(2);
}

