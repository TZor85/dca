#include <iostream>

using namespace std;

int main() {

    int num1,num2,mayor;

    cout << "Introduzca el primer numero entero: " << endl;
    cin >> num1;
    
    cout << "Introduzca el segundo numero entero: " << endl;
    cin >> num2;

    if(num1>num2)
    {
	mayor = num1;
    }
    else
    {
	mayor = num2;
    }

    return 0;

}
