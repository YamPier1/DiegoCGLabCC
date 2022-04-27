/*1. Sumar todos los enteros pares desde 2 hasta 100.*/
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=2;i<=100;i++)
    {
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
/*2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.*/

#include <iostream>
using namespace std;
int main(){
    int cont_p=0;
    for(int i=1;cont_p<50;i++)
    {   
        int cont_d=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0){
            cont_d+=1;
            }
        }
        if(cont_d==2){
        cout<<i<<endl;
        cont_p++;
        }
    }
    return 0;
}

/*3. Escribir un programa que visualice en pantalla los números múltiplos de 5
comprendidos entre 1 y 100.*/

#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        if(i%5==0){
            cout<<i<<endl;
        }
    }
    return 0;
}

/*4. Escriba un código que solicite ingresar dos números � y �, tal que � < �. Muestre
todos los números primos que se encuentren entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a � o �.*/

#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Primer numero: ",cin>>n1;
    cout<<"Segundo numero: ",cin>>n2;
    for(int i=n1;i<=n2;i++)
    {   
        int cont_d=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0){
            cont_d+=1;
            }
        }
        if(cont_d==2){
        cout<<i<<endl;
        }
    }
    return 0;
}

/*5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos.*/

#include <iostream>
using namespace std;
int main(){
    int n;
    int mayor,menor;
    int sum;
    cout<<"cantidad de numeros: ",cin>>n;
    cout<<"numero 1: ",cin>>menor;
    mayor=menor;
    sum=menor;
    for(int i=1;i<n;i++)
    {   
        float num;
        cout<<"numero "<<i+1<<": ",cin>>num;
        sum=sum+num;
        if(mayor<=num)
        {
        mayor=num;
        }
        if(menor>=num){
        menor=num;
        }       
    }
    cout<<"El numero menor es: "<<menor<<endl;
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"La media es: "<<sum/n;
    return 0;
}



/*6. Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.*/

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int num,f1=0,f2=1,f3=1;
    cout<<"Cantidad de elementos: ",cin>>num;
    cout<<f1<<" "<<f2<<" ";
    for(int i=0;i<num-2;i++)
    {
        f3=f2+f1;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
    }
    cout<<"\n";
    system("pause");
    return 0;
}

/*7. Calcula el promedio de 3 notas para n estudiantes.*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"numero de estudiantes: ",cin>>n;
    for(int i=1;i<=n;i++)
    {   
        float n1=0,n2=0,n3=0;
        cout<<"Estudiante "<<i<<" nota 1: ",cin>>n1;
        cout<<"Estudiante "<<i<<" nota 2: ",cin>>n2;
        cout<<"Estudiante "<<i<<" nota 3: ",cin>>n3;
        cout<<"Promedio: "<<((n1+n2+n3)/3)<<endl;
    }
    return 0;
}

/*8. Escribir un programa que genere la tabla de multiplicar de un número introducido por
el teclado.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"numero: ",cin>>n;
    for(int i=1;i<=12;i++)
    {   
        cout<<i<<" * "<<n<<" : ";
        cout<<i*n<<endl;
    }
    return 0;
}

/*9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un
triángulo rectángulo como el de más abajo, de altura el número introducido.
*
**
***
****
*****
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Altura: ",cin>>n;
    for(int i=0;i<n;i++)
    {   
        cout<<endl;
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
    }
    return 0;
}

/*10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
una a una las letras de la palabra introducida empezando por la última.*/

#include <iostream>
using namespace std;
int main(){
    string palabra;
    cout<<"Introduzca la palabra: ",cin>>palabra;
    for(int i=palabra.size();i>=0;i--)
    {
        cout<<palabra[i];
    }
    return 0;
}

/*4. Escriba un código que solicite ingresar dos números � y �, tal que � < �. Muestre
todos los números primos que se encuentren entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a � o �.*/

#include <iostream>
using namespace std;
int main(){
    int n1,n2,p=0;
    cout<<"Primer numero: ",cin>>n1;
    cout<<"Segundo numero: ",cin>>n2;
    for(int i=n1;i<=n2;i++)
    {   
        int cont_d=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0){
            cont_d+=1;
            }
        }
        if(cont_d==2){
        cout<<i<<endl;
        p++;
        }
    }
    if(p==0)
    {
        for(int k=1;p!=1;k++)
        {   
            int pro1=n1-k,pro2=n2+k;
            int cont_div1=0,cont_div2=0;
            for(int j=1;j<=k;j++)
            {
                if(pro1%j==0){
                cont_div1+=1;
                }
                if(pro2%j==0){
                cont_div2+=1;
                }
            }
            if(cont_div1==2){
            cout<<pro1+1;
            p++;
            }
            else if(cont_div2==2){
            cout<<pro2-1;
            p++;
            }
        }
    }
    return 0;
}
