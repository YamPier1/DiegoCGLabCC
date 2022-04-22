/*1. Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos.*/
/*
#include <iostream>
using namespace std;
int main(){
    int a=0,b=0;
    cout<<"Ingrese el 1er numero: ",cin>>a;
    cout<<"Ingrese el 2do numero: ",cin>>b;
    cout<<a*b;
    return 0;
}
*/
/*2. Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).*/
/*
#include <iostream>
using namespace std;
int main(){
    string nombre,a_paterno,a_materno;
    cout<<"Ingrese su nombre: ",cin>>nombre;
    cout<<"Ingrese su apellido paterno: ",cin>>a_paterno;
    cout<<"Ingrese su apellido materno: ",cin>>a_materno;
    cout<<"Su cuenta institucional es..."<<endl;
    cout<<nombre[0]<<a_paterno<<a_materno[0]<<"@unsa.edu.pe";
    return 0;
}
*/
/*3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
formato de salida debe de estar en AM o PM según corresponda).





/*4. Escriba un código que solicite una cantidad de minutos específica y muestre como
resultado la hora y fecha resultante tomando como referencia la hora y fecha actual y
restarle el tiempo indicado.*/





/*5. Elabore un código que reciba como entrada una secuencia de caracteres que contiene
un numero flotante y retorne el número redondeado.*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float num;
    cout<<"Ingrese el numero flotante: ",cin>>num;
    cout<<"El numero redondeado es: "<<round(num);
    return 0;
}
*/
/*6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
en binario.*/
/*
#include <iostream>
using std::cout;
using std::endl;
using std::string;
string binario(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    int num=10;
    cout <<"decimal: "<<num<<endl;
    cout <<"binario: "<<binario(num)<<endl;

    return EXIT_SUCCESS;
}
*/
/*7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Ingrese el 1er numero: ",cin>>num1;
    cout<<"Ingrese el 2do numero: ",cin>>num2;
    if(num1%num2){
        cout<<num1<<" es divisor de "<<num2<<endl;
            if(num2%num1)
            cout<<num2<<" es divisor de "<<num1<<endl;
            else 
            cout<<num2<<" no es divisor de "<<num1<<endl;
    }
    else 
        cout<<num1<<" no es divisor de "<<num2<<endl;
    return 0;
}
*/

/*8. Escribir un programa que calcule la media de x cantidad números introducidos por el
teclado.*/
/*
#include<iostream>
using namespace std;
int main(){
    int num=0,n=0;
    float sum=0;
    cout<<"Cantidad de numeros a introducir: ",cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"numero : ";cin>>num;
        sum=sum+num;
    }
    cout<<"La media es : "<<sum/n<<endl;
    return 0;
}
*/
/*9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
negativos.*/
/*
#include <iostream>
using namespace std;
int main(){
    float sum=0;
    for(int i=0;i<10;i++){
    int num=0;
    cin>>num;
        if(num<0){
            sum=sum+num;
        }
    }
    cout<<"La suma es:"<<sum;
    
    return 0;
}
*/
/*10. Escribir un programa que almacene la cadena de caracteres contraseña en una
variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
correcta.*/
/*
#include <iostream>
using namespace std;
int main(){
    char x='unsa2022';
    char a='xd';
    cout<<"Contrasena: ";
    cin>>a;
    while (a!=x)
    {
        cout<<"Ingrese la contraseña correcta: ";
        cin>>a;
    }
    
    return 0;
}
*/
