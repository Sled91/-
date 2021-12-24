#include <iostream>

using namespace std;

template <typename T1, typename T2>                      //шаблон типов функций вместо 4 ффункций
T2 printArr(const T1* array, int i) {
	int count = 0;
	for (int j = 0; j < i; j++) {
		cout << array[j] << " ";
		count++; //подсчитываем кол-во
	}
	cout << "\n";
	return count;
}


int main() {
	const int iSize = 3, fSize = 2, dSize = 3, cSize = 5;
	int i_arr[iSize] = { 23,45,78 };
	float f_arr[fSize] = { 12.2, 68.5 };
	double d_arr[dSize] = { 3.325,7.568,0.256 };
	char c_arr[cSize] = { "Hi!!" };

	cout << "Massiv s int: ";
	printArr<int, int>(i_arr, iSize);
	cout << "Massiv s float: ";
	printArr<float, int>(f_arr, fSize);
	cout << "Massiv s double: ";
	printArr<double, int>(d_arr, dSize);
	cout << "Massiv s char: ";
	printArr<char, int>(c_arr, cSize);
}