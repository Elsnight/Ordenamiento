#include <iostream>
#include "uno.h"
#include "dos.h"
using namespace std;
using namespace heap;


//void HeapSort(int b[], int n);

int main()
{
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    cin >> A[i];
    HeapSort(A,n);
    imprimir(A,n);
    return 0;
}

