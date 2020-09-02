#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream archivo;
    archivo.open("interpolacion.txt",fstream::app);//apertura y creacion

    int A[7]={1,2,3,4,5,6,7};
    int primero=0;
    int ultimo=7-1;
    int medio;
    int n=2;
    int i;

    //escibir datos en archivo
    cout<<"Numero de busqueda:"<<n<<endl;
    cout<<"Arreglo para buscar :";

    archivo<<"Numero de busqueda:"<<n<<endl;
    archivo<<"Arreglo para buscar :";

    for(i=0;i<7;i++){
        cout<<A[i];
        archivo<<A[i];
    }

    archivo<<endl;
    cout<<endl;


    int contador=0;
    while(A[primero]!=n && contador<7)
    {

    medio = primero + ((n-A[primero])*(ultimo-primero))/(A[ultimo]-A[primero]);

    if(A[medio]<n)
          primero = medio+1;

    else if(A[medio]>n)

          ultimo = medio-1;
    else
          primero = medio;

      contador++ ;
      break;
    }


    if(A[primero]==n)
    {
        cout<<"ELEMENTO ENCONTRADO";
        archivo<<"ELEMENTO ENCONTRADO";
    }
    else
    {
        cout<<"ELEMENTO NO ENCONTRADO";
        archivo<<"ELEMENTO NO ENCONTRADO";
    }
    archivo.close();
    return 0;
}
