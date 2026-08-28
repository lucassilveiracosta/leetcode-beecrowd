#include <iostream>
#include <cmath>

using namespace std;

int result(int pa, int pb, float ca, float cb) {
    int tempo = 0;

    while (pa <= pb) {
        pa += (int)((pa * ca) / 100);
        pb += (int)((pb * cb) / 100);
        tempo++;

        if (tempo > 100) {
            return -1; 
        }
    }

    return tempo;
}



int main() {

    int t;
    cin >> t;

    int vetor_pop_A[t];
    int vetor_pop_B[t];
    float vetor_cres_A[t];
    float vetor_cres_B[t];

    for (int i = 0; i < t; i++) {
        scanf("%d %d %f %f", &vetor_pop_A[i], &vetor_pop_B[i], &vetor_cres_A[i], &vetor_cres_B[i]);
    }

    for (int i = 0; i < t; i++) {
        int res = result(vetor_pop_A[i], vetor_pop_B[i], vetor_cres_A[i], vetor_cres_B[i]);
        string out = res <= 100 && res >= 0 ? to_string(res) + " anos." : "Mais de 1 seculo.";
        cout << out << "\n";
    }
    


    
    return 0;
}