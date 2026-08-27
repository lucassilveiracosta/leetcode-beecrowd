#include <iostream>
#include <vector>

using namespace std;

vector<int> cedulas(int money) {
    vector<int> vetor_cedula;
    int value = money;
    int sobra = 0;
    
    sobra = value % 100;
    vetor_cedula.push_back(value / 100);

    value = sobra;

    sobra = value % 50;
    vetor_cedula.push_back(value / 50);

    value = sobra;

    sobra = value % 20;
    vetor_cedula.push_back(value / 20);

    value = sobra;

    sobra = value % 10;
    vetor_cedula.push_back(value / 10);

    value = sobra;

    sobra = value % 5;
    vetor_cedula.push_back(value / 5);

    value = sobra;

    sobra = value % 2;
    vetor_cedula.push_back(value / 2);

    vetor_cedula.push_back(sobra);


    return vetor_cedula;
}

int main() {

    int money;
    cin >> money;

    int vector_cedula[7] = {100, 50, 20, 10, 5, 2, 1};

    vector<int> vector = cedulas(money);

    cout << money << "\n";
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " nota(s) de R$ " << vector_cedula[i] << ",00\n";
    }
    

    return 0;
}