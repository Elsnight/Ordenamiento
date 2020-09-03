#include <iostream>
#include <fstream>

using namespace std;

int mitad (int arr[], int pinicial, int pfinal);

void ordenar(int arr[], int pinicial, int pfinal);



int main()
{
    //ARCHIVOS
    ofstream archivo;
    archivo.open("quicksort.txt",fstream::app);//apertura y creacion

    archivo<<"Sin ordenar:";
    int A[11]={88, -6, 69, -33, 98, 7, 23, -5, 0, 100,45};

    for(int i = 0;i<11;i++) {
        archivo<<"|"<<A[i]<<"|";
    }
    ordenar(A,0,10);

    archivo<<endl;

    archivo<<"Arreglo ordenado:";

    for (int i=0; i<11;i++)
    {
        cout<<"|"<<A[i]<<"|";
        archivo<<"|"<<A[i]<<"|";


    }

    archivo.close();
    return 0;
}

int mitad (int arr[], int pinicial, int pfinal)
{
    return arr[(pinicial + pfinal) / 2];
}


void ordenar(int arr[], int pinicial, int pfinal)
{

    int i=pinicial;
    int j=pfinal;
    int temp;
    int piv=mitad(arr,pinicial,pfinal);

    do
    {
        while (arr[i] < piv)
          {
              i++;
          }
          while (arr[j] > piv)
          {
              j--;
          }

          if (i <= j)
          {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
               i++;
               j--;
          }
    }

     while (i <= j);

     if (pinicial < j)
          ordenar(arr, pinicial, j);
     if (i < pfinal)
          ordenar(arr, i, pfinal);
}




