//
// Created by nickotronz7 on 3/10/16.
//

#include <iostream>
#include <vector>
#include "Mochila.h"
#include "Max_Donations.h"

using namespace std;

string to_String(const vector<int>& vec, string vecS)
{
    vecS += "{";
    for (int i = 0; i < vec.size(); ++i)
    {
        int x = vec[i];
        vecS += to_string(x);
        if (i == vec.size()-1)
        {
            break;
        } else {
            vecS += ",";
        }
    }
    vecS += "}";
    return vecS;
}

int main()
{
    /**
     * Prueba para el problema de las donaciones maximas
     */
/////////////////////////////////////////////////////////////
    vector<int> v1{10, 3, 2, 5, 7, 8};
    vector<int> v2{11, 15};
    vector<int> v3{7, 7, 7, 7, 7, 7, 7};
    vector<int> v4{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    /*vector<int> v5{94,  40, 49, 65, 21, 21,  106,
                   80, 92, 81, 679, 4,   61, 6,
                   237, 12, 72, 74, 29, 95,  265, 35,
                   47, 1,  61,  397, 52, 72,
                   37,  51, 1,  81, 45, 435, 7,   36,
                   57, 86, 81,  72};*/

    string vec1;
    string vec2;
    string vec3;
    string vec4;
    //string vec5;

    vec1 = to_String(v1,vec1);
    vec2 = to_String(v2,vec2);
    vec3 = to_String(v3,vec3);
    vec4 = to_String(v4,vec4);
    //vec5 = to_String(v5,vec5);

    cout << vec1 << " " << max_donations(v1) << endl;
    cout << vec2 << " " << max_donations(v2) << endl;
    cout << vec3 << " " << max_donations(v3) << endl;
    cout << vec4 << " " << max_donations(v4) << "\n" << endl;
    //cout << vec5 << " " << max_donations(v5) << endl;
/////////////////////////////////////////////////////////////


    /**
     * Prueba para el problema de la mochila
     */
/////////////////////////////////////////////////////////////
 int numero_de_articulos = 3;
 int Peso[numero_de_articulos] = {2, 3, 4};
 int Valor[numero_de_articulos] = {65, 80, 30};
 int PMax = 5;
 Mochila(numero_de_articulos, Peso, Valor, PMax);
/////////////////////////////////////////////////////////////
    return 0;
}