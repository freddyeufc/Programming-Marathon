#include <iostream>
#define endl '\n'

using namespace std;

int main() {

    int total,  N = -1;

    while (true){
        scanf("%d", &N);
        if(N == 0){
            break;
        }
        total = 0;
        for (; N > 0 ; --N) {
            total += N*N;
        }
        cout << total << endl;
    }

    return 0;
}