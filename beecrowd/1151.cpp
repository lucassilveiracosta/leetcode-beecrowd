#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int vector[n];
    vector[0] = 0;
    vector[1] = 1;

    for (int i = 2; i < n; i++) {
        vector[i] = vector[i - 1] + vector[i - 2];
    }

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << vector[i] << "\n";
        }
        else { 
            cout << vector[i] << " ";
        }   
    
    }
    
    return 0;
}