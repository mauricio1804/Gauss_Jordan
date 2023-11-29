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

    int i, j, multiplicacao[L][C];
    for (i = 0; i < C; i++){
        for (j = 0; j < L; j++){
            
        }
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

    cout << 3;

    soma_matriz(v, v2);

}