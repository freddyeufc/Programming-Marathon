#include <iostream>
#include <math.h>
#define endl '\n'

using namespace std;

int main() {

    int N, number;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        scanf("%d", &number);
        if(number%2 == 0 && number != 2){
            cout << "Not Prime" << endl;
        } else {
            int prime = 0;
            int aux = sqrt(number);
            for (int j = 1; j <= aux; ++j) {
                if(number%j == 0){
                    prime++;
                    if(prime >= 2){
                        break;
                    }
                }
            }
            if(prime <= 1){
                cout << "Prime" << endl;
            } else {
                cout << "Not Prime" << endl;
            }
        }
    }

    return 0;
}