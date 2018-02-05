#include <iostream>
#include <math.h>

using namespace std;

//long long int divine(int n) {
//
//    int aux = sqrt(n);
//    long long int total = 0;
//
//    for (int i = 1; i <= aux; ++i) {
//        if (n % i == 0) {
//            if (i != n / i) {
//                total += i + n / i;
//            } else {
//                total += i;
//            }
//        }
//    }
//    return total;
//}

int main() {

    int n;
    long long int result = 0;

    long long int alr[1000001] = {0};

    for (int i = 1; i < 1000001; i++) {
        for (int j = i; j < 1000001; j+=i) {
            alr[j] += i;
        }
        result += alr[i];
        alr[i] = result;
    }

    while (scanf("%d", &n) != 0) {
        if (n == 0) {
            break;
        } else if (n == 1) {
            cout << 1 << endl;
        } else {
            cout << alr[n] << endl;
        }
    }
    return 0;
}