#include <iostream>

using namespace std;
int main()
{
    float a, b;
    cout << "Podaj dwie liczby \n";
    cin >>a;
    cin >>b;
    if (a<=b){
        cout << a << "\n" << b;
    }
    else {
        cout << b << "\n" <<a;
    }
    return 0;
}
