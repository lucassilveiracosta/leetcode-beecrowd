#include <iostream>
#include <vector>

using namespace std;

// Variável global para rastrear o número de chamadas
int calls_count = 0;

int fibonacci(int x) {
    calls_count++;
    if (x != 0 && x != 1) {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
    return x;
}

int main() {
    // Otimização de I/O para respostas rápidas (comum em juízes online como Beecrowd/URI)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> all_values(n);
    for (int i = 0; i < n; i++) {
        cin >> all_values[i];
    }

    for (int i = 0; i < n; i++) {
        calls_count = 0;
        int result = fibonacci(all_values[i]);
        cout << "fib(" << all_values[i] << ") = " << calls_count - 1 << " calls = " << result << "\n";
    }

    return 0;
}