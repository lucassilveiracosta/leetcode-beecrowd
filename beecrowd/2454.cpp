#include <iostream>

using namespace std;

int main() {
    int bin1;
    int bin2;

    scanf("%d %d", &bin1, &bin2);
    
    
    if (bin1 == 1) {
        if (bin2 == 1) {
            cout << "A\n";
        }
        else {
            cout << "B\n";
        }
        
    }
    else {
        cout << "C\n";
    }

    return 0;
}