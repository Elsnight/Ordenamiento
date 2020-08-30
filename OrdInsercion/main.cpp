#include <iostream>
#include <string>
using namespace std;
#include <fstream>
int main()
{
    ofstream archivo;
    archivo.open("ordenamiento.txt",fstream::app);//apertura y creacion

    int a[]={4,2,3,1,5};

    int i,pos,aux;
    int cont=0,sum=0;

    //leer arreglo
    cout<<"Arreglo sin ordenar :";
    archivo<<"Arreglo sin ordenar :";
    for(i=0;i<5;i++){
        cout<<a[i];
        sum=sum+a[i];
        archivo<<a[i];
        cont++;
    }
    cout<<endl;
    cout<<"Total de numeros:"<<cont<<endl;
    cout<<"Suma de Elementos:"<<sum<<endl;
    archivo<<endl;
    archivo<<"Total de numeros:"<<cont<<endl;
    archivo<<"Suma de Elementos:"<<sum<<endl;



    for (int i=0 ; i<5; i++)
    {
        pos=i;
        aux=a[i];

        while((pos>0)&&(a[pos-1]>aux))
        {
           a[pos]=a[pos-1];
           pos--;
        }
        a[pos]=aux;
    }
 cout<<"Arreglo ordenado :";
 archivo<<"Arreglo ordenado :";
    for(int i=0;i<5;i++)
    {

        cout<<a[i];
         archivo<<a[i];
    }



archivo.close();
    return 0;

}

