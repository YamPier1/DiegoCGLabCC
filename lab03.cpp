/*1. Hacer un programa que sin usar la función pow(), pero por medio de una función, 
calcule la potencia de un número (ambos números ingresados por teclado).
*/
#include <iostream>
using namespace std;
int potencia(int a,int b)
{   int pot=1;
    for(int i=0;i<b;i++)
    {
        pot=pot*a;
    }
return pot;
}
int main(){
    int x,y;
    cout<<"Numero 1: ",cin>>x;
    cout<<"Numero 2: ",cin>>y;
    cout<<"La potencia de "<<x<<" elevado a "<<y<<" es "<<potencia(x,y);
    return 0;
}
/*2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para 
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el 
año leído por teclado, comprueba si es o no bisiesto.*/
#include <iostream>
using namespace std;
void bisiesto(int a)
{   
    if(a%4==0)
        cout<<"El año "<<a<<" es bisiesto.";
    else
        cout<<"El año "<<a<<" no es bisiesto.";
}
int main(){
    int anio;
    cout<<"Ingrese un anio: ",cin>>anio;
    bisiesto(anio);
    return 0;
}
/*3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de 
una persona y por medio de una función calcule su edad en años, meses y días.*/
#include <iostream>
using namespace std;
void FechaN(int a, int b, int c,int d,int e,int f)
{   
    cout<<"Ingrese fecha de nacimiento:(dia/mes/año): ";
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Ingrese la fecha actual(dia/mes/año): ";
    cin>>d;
    cin>>e;
    cin>>f;
    int años,meses,dias;
    años=c-f;
    meses=b-e;
    dias=a-d;
    
}
int main(){

    return 0;
}
/*4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de 
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado)*/
#include <iostream>
using namespace std;
int primos(int n)
{   
    for(int i=1;i<=n;i++)
    {   
        int cont=0; 
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cont++;
            }
        }
        if(cont==2)
        {
            cout<<i<<" ";
        }
    }
}
int main(){
    int num;
    cout<<"Primos(1-x): ",cin>>num;
    primos(num);
    return 0;
}
/*5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las 
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x.
*/
#include <iostream>
using namespace std;
void opcion()
{   
    string a="a",b="b",c="c",x;
    cout<<"a.Introducir un valor x entero comprendido entre 0 y 100.\nb. Validar que sea un valor par.\nc. Sumar todos los numeros impares desde el 0 hasta el valor de x.";
    cout<<"\nIngrese su opcion: ",cin>>x;
    while (not(x==a || x==b || x==c))
    {
        cout<<"Opcion erronea, ingrese denuevo su opcion: ", cin>>x;
    }
    if(a==x)
    {
        int valor=0;
        cout<<"Introduce un valor(0-100).",cin>>valor;
        while (not(0<=valor<=100))
        {
            cout<<"Valor no comprendido(0-100).";
            cin>>valor;
        }
        if(0<=valor<=100)
            cout<<"El valor "<<valor<<" si se encuentra comprendido(0-100).";
    }
    else if(b==x)
    {   
        int v=0;
        cout<<"Ingrese un valor: ",cin>>v;
        
        while (v%2!=0)
        {
            cout<<"El valor ingresado no es par.";
            cin>>v;
        }
        if(v%2==0)
        {
            cout<<"El valor ingresado si es par.";
        }
    }
    else if(c==x)
    {   
        int sum=0;
        int va=0;
        cout<<"Ingrese un valor: ",cin>>va;
        for(int i=0;i<=va;i++){
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        cout<<sum;
    }
}
int main(){
    opcion();
    return 0;
}



