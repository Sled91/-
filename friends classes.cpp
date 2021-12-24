// Дружественные классы - это схожее понятие с понятием дружественные функции, 
//отличие заключается в том, что если один класс станет другом другого класса, 
//то все функции класса станут дружественными функциями класса

#include <iostream>
using namespace std;

class person;
class dog {
    friend class person; //дружественный класс
private:
   int health = 100;
};

class person {
public:
    void damage(dog &d) { // & передает ссылку к параметру
        d.health -= 20;
        cout << "health of the dog is " << d.health <<"\n";
    }

    void kill(dog &d) {
        d.health = 0;
        cout << "health of the dog is " << d.health << "\n";
    }

    void heal(dog& d) {
        d.health += 40;
        cout << "health of the dog is " << d.health << "\n";
    }
};
int main()
{
    dog Bayanai;
    person Pukli;
    person Badmen;
    Pukli.damage(Bayanai);
    Badmen.kill(Bayanai);
    Badmen.damage(Bayanai);
    Pukli.heal(Bayanai);

    cout << "\n";

    dog Haski;
    Badmen.damage(Haski);

}

