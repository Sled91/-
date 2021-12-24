#include <iostream>

using namespace std;

class village {
private:
    int st_num, people;
    string street_name, color;

public:

    void house_num(int house_st_num, int family_people) {
        st_num = house_st_num;
        people = family_people;
    }

    void house_st_cl(string house_street, string house_color){
        street_name = house_street;
        color = house_color;
    }

    void comp(){
        cout << " " << st_num << " " << street_name << " street, " << color << " color house." << "Family member is " << people << " people\n";
    }
};

int main()
{
    village ivanov;
    ivanov.house_num(1, 6);
    ivanov.house_st_cl("GreenLine", "Green");
    ivanov.comp();

    village popov;
    popov.house_num(2, 3);
    popov.house_st_cl("LaughTell", "Blue");
    popov.comp();

    village petrov;
    petrov.house_num(3, 1);
    petrov.house_st_cl("Sadness", "Brown");
    petrov.comp();

}

