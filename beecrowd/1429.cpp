#include <iostream>
#include <vector>
#include <string>

using namespace std;

int acm(string x) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    switch (x.length()) {
    case 1:
        a = (x[x.length() - 1] - '0');
        //cout << 1;
        break;
    case 2:
        a = (x[x.length() - 1] - '0');
        b = (x[x.length() - 2] - '0') * 2;
        //cout << 2;
        break;
    case 3:
        a = (x[x.length() - 1] - '0');
        b = (x[x.length() - 2] - '0') * 2;
        c = (x[x.length() - 3] - '0') * 6;
        //cout << 3;
        break;
    case 4:
        a = (x[x.length() - 1] - '0');
        b = (x[x.length() - 2] - '0') * 2;
        c = (x[x.length() - 3] - '0') * 6;
        d = (x[x.length() - 4] - '0') * 24;
        //cout << 4;
        break;
    case 5:
        a = (x[x.length() - 1] - '0');
        b = (x[x.length() - 2] - '0') * 2;
        c = (x[x.length() - 3] - '0') * 6;
        d = (x[x.length() - 4] - '0') * 24;
        e = (x[x.length() - 5] - '0') * 120;
        //cout << 5;
        break;
    default:
        break;
    }
    return a + b + c + d + e;
}

int main() {
    string n;
    vector<int> vector;

    while(true) {
        cin >> n;
        if(n.length() != 1 || n[0] != '0'){
            vector.push_back(acm(n));
        }
        else break;
    }
    
    for (int i: vector) {
        cout << i << "\n";
    }
    // método de conversão
    //cout << '4' - '0' + 2;
    return 0;
}