#include<iostream>

using namespace std;

const int arr_length = 3;

template <class Type>			//Шаблоны намного упрощают код
class Arr {
private:
	Type arr[arr_length];
public:
	Arr(Type* a) {
		for (int i = 0; i < arr_length; i++)
			arr[i] = a[i];
	}

	Type getElement(int i) {
		return arr[i];
	}
};

int main() {

	int arr[] = { 2,5,6,7 };
	Arr<int> obj(arr); //создаем объект класса Arr с типом данных int и передаем массив arr[]
	cout << obj.getElement(2)<<"\n";

	char arr_1[] = { "Mars" };
	Arr<char>object(arr_1);
	cout << object.getElement(2)<<"\n";
} 