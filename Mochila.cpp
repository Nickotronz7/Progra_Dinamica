/**
 * Recuperado de:
 * https://espanol.answers.yahoo.com/question/index?qid=20100623063532AAhoOsj
 */
#include <iostream>

using namespace std;

void Mochila(int n, int Peso[], int Valor[], int PMax)
{
    int *a = new int[PMax];
    int *temp = new int[PMax];
    int aux;

    for (int i = 0; i <= PMax; i++){
        a[i] = 0;
        temp[i] = -1;
    }

    a[0] = 0;
    for (int i = 1; i <= PMax; i++)
        for (int j = 0; j < n; j++)
            if ((Peso[j] <= i) && (a[i] < a[i - Peso[j]] + Valor[j])){
                a[i] = a[i - Peso[j]] + Valor[j];
                temp[i] = j;
            }

    aux = PMax;
    while ((aux > 0) && (temp[aux] != -1)){
        cout << "Se agrego " << temp[aux] + 1 << " ($"<<Valor[temp[aux]] << ", " << Peso[temp[aux]] << "Kg) Espacio disponible: " << aux - Peso[temp[aux]] << endl;
        aux -= Peso[temp[aux]];
    }
    cout << "Valor total: $" << a[PMax] << endl;
    delete[] temp;
    delete[] a;
}