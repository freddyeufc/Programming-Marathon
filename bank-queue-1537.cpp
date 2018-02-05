#include <iostream>
#define endl '\n'

using namespace std;

int main() {

    int n;

    while(cin >> n){
        if(n == 0){
            break;
        } else {
            /*
             * 4
             * 1 a b c
             * a 1 b c
             * a b 1 c
             * a b c 1
             * */
            int total = 1;
            for (int i = n-3; i > 0; --i) {
                total += total*i;
            }
            cout << total << endl;
        }
    }

    return 0;
}