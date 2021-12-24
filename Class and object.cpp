#include <iostream> // объектно ориентированное прораммирование - по простому это объекты и классы

using namespace std;

class Auto {            //КЛАСС НЕЛЬЗЯ ЗАПИСЫВАТЬ ВНУТРИ ФУНКЦИИ
private:
    int year, month, day;

public:             //все переменные будут видны везде
   /* void message() {
        cout << "class is working";
    } */

  /*  private:               // видны только в своем классе 
    int val1 = 10;
protected:
    int val2 = 10;      // видны исключительно в классах, которые унаследованы от класса*/
    Auto() {                //Конструктор - применяется при создании объекта
        year = 2000;
        month = 12;
        day = 31;

        b();
        cout << "\n";
    }

    Auto(int date_year, int date_month, int date_day) { // перегрузка конструктора
        year = date_year;
        month = date_month;
        day = date_day;

        b();
        cout << "\n";
    }

    void a(int date_year, int date_month, int date_day) {
        year = date_year;
        month = date_month;
        day = date_day;
    }

    void b() {
        cout << "year of this auto is - " << year << ", month is - " << month << ", day is - " << day;
    }

    ~Auto () {
        cout << "Class is't work"; //дестркутор - нужен для чистки памяти
        cin.get();
    }
};

    

int main()
{
    Auto toyota;
    // toyota.message();
    toyota.a(2005, 11, 11);
    toyota.b();

    cout << "\n";

    Auto bmw(2011, 01, 31);
    
}