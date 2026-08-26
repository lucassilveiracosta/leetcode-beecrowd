#include <iostream>

using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i*i < n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }   
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i]; 
    }
    
    
    for(int i = 0; i < n; i++) {
        if (ehPrimo(numbers[i])) {
            cout << "Prime\n";
        }
        else {
            cout << "Not Prime\n";
        }
    }
    

    return 0;
}