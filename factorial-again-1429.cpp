#include <iostream>
#define endl '\n'

using namespace std;

int fat(int n){
    int total = 1;
    for (int i = 1; i <= n ; ++i) {
        total *= i;
    }
    return total;
}

int main() {

    int N, total, f;

    while (true){
        scanf("%d", &N);
        if (N == 0){
            break;
        }
        total = 0;
        f = 1;
        int aux;
        while (N > 0){
            aux = N%10;
            total += aux * fat(f);
            f++;
            N = N/10;
        }
        cout << total << endl;
    }

    return 0;
}