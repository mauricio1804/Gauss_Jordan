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
                multiplicacao[i][j] += v[i][k] * v2[k][j];
            }
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
            cout << "[" << i << ", " << j << " ]=";
            cin >> v[i][j];
        }
    }

}

int main(){
    int v[L][C], v2[L][C];

    cout << "Preencha a primeira matriz: " << endl;
    preenche_matriz(v);
    cout << "Preencha a segunda matriz: " << endl;
    preenche_matriz(v2);

    cout << "A soma dessas matrizes e: " << endl;
    soma_matriz(v, v2);

    cout << "A multiplicacao dessas matrizes e: " << endl;
    mult_matriz(v, v2);

    getchar();

}