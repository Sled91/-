#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string a, b, c;
    int k=0;
    cin >> a;
    transform(a.begin(), a.end(), a.begin(), tolower);
    c = b = a;
    
    for (int i = 0; i < a.length(); i++) 
    {
        for (int j = 0; j < a.length(); j++) 
        {
            if (a[i] == b[j])
            {
                k++;
            }
        }
        if (k >= 2) {
            c[i] = ')';
        }
        else {
            c[i] = '(';
            k = 0;
        }
        k = 0;
    }
    cout << c;
}
