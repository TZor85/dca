#include <iostream>

using namespace std;

int main() {

    int num1,num2,mayor,pred;
    bool acertado=false;

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

    cout << "¿cual será el numero mayor? (1 o 2)" << endl;
    cin >> pred;

 switch(pred)
    {
	case 1: 
		if(mayor==num1)
		{
			acertado=true;
   		}
	break;
	case 2:
		if(mayor==num2)
		{
			acertado=true;
   		}
	break;
    }

    if(acertado)
    {
	cout << "Enhorabuena, ha acertado el mayor!! es el numero: " << mayor << endl;

    }
    else
    {
	cout << "OOOHHHH!!! ha fallado, el numero mayor es: " << mayor << endl;

    }

   
    return 0;

}
