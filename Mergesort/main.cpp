#include <iostream>
#include <fstream>

using namespace std;
//Librería para usar las funciones que crean números aleatorios
#include <ctime>


void dividir(int a[], int inicial, int final);

void Fusionar(int a[],int pinicial, int pfinal, int medio);



int main()
{
    //ARCHIVOS
    ofstream archivo;
    archivo.open("mergesort.txt",fstream::app);//apertura y creacion

    //ARREGLO DE NUMEROS ENTEROS
     int numeros[10];
    //COMENZAR CON LA SEMILLA
    srand(time(0));

     for(int i = 0; i < 6; i++)
     {
        //ASIGNAR NÚMEROS DEL 0 al 99
        //numeros[i] = rand() % 100;
        //ASIGNAR NÚMEROS DEL 1 al 11
        numeros[i] = 1 + rand() % (20-1);
     }

     archivo<<"Arreglo sin ordenar:";

   for (int i = 0; i < 6; i++)
	{
	    cout<<"|"<<numeros[i]<<"|";
	    archivo<<"|"<<numeros[i]<<"|";
	}

	dividir(numeros,0,6);

   cout<<endl;
   archivo<<endl;
   archivo<<"Arreglo ordenado:";
   for (int i = 0; i < 6; i++)
	{
	    cout<<"|"<<numeros[i]<<"|";
	    archivo<<"|"<<numeros[i]<<"|";

	}
	archivo.close();
    return 0;
}




void dividir(int a[], int inicial, int final)
{
    int mitad;
    if (inicial < final)
	{
		mitad=(inicial+final)/2;

		dividir(a,inicial,mitad);
		dividir(a,mitad+1,final);
		Fusionar(a,inicial,final,mitad);
	}
}


void Fusionar(int a[],int pinicial, int pfinal, int medio)
{

	int i, j, k, temp[pfinal-pinicial+1];
	i = pinicial;
	k = 0;
	j = medio + 1;

	while (i <= medio && j <= pfinal)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= medio)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <=pfinal)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for (i = pinicial; i <= pfinal; i++)
	{
		a[i] = temp[i-pinicial];
	}

}
