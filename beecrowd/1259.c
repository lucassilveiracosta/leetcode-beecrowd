#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int x;
    int numeros[n];
    int p = 0;
    int i = 0;
    while(i + p < n) {
        scanf("%d", &x);
        
        if (x % 2 == 0) {
            int j = p - 1;
            while (j >= 0 && x < numeros[j]) {
                numeros[j + 1] = numeros[j];
                j--;
            }
            numeros[j + 1] = x;
            p++;
        }
        else {
            int b = n - i;
            while (b < n && x < numeros[b]) {
                numeros[b - 1] = numeros[b];
                b++;
            }
            numeros[b - 1] = x;
            i++;
        }
    }    
    for(int i = 0; i < n; i++) {
        printf("%d\n", numeros[i]);
    }
    return 0;
}