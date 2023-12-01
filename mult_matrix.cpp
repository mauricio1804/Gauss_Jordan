#include <iostream>
#define C 3
#define L 3

using namespace std;

void soma_matriz(int v[][C], int v2[][C]){
    int i, j, soma[L][C];

    for (i = 0; i < C; i++){
        for (j = 0; j < L; j++){
            soma[i][j] = v[i][j] + v2[i][j];
        }
    }

    for (i = 0; i < C; i++){
        for (j = 0; j < L; j++){
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }
}

void mult_matriz(int v[][C], int v2[][C]){

    int i, j, k, aux, multiplicacao[L][C];
    for (i = 0; i < C; i++){
        for (j = 0; j < L; j++){
            multiplicacao[i][j] = 0;
            for (k = 0; k < L; k++){
                aux += v[i][k] * v2[k][j];
            }
            multiplicacao[i][j] = aux;
            aux = 0;
        }
    }

    for (i = 0; i < C; i++){
        for (j = 0; j < L; j++){
           cout << multiplicacao[i][j] << " ";
        } 
        cout << endl;
    }
    
}

void preenche_matriz(int v[][C]){

    int i, j;

    for (i = 0; i < C; i++){
        for (j = 0; j < L; j++){
            cin >> v[i][j];
        }
    }

}

int main(){
    int v[L][C], v2[L][C];

    preenche_matriz(v);
    preenche_matriz(v2);

    soma_matriz(v, v2);

    mult_matriz(v, v2);

}