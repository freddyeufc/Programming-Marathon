#include <iostream>
#define endl '\n'

using namespace std;

int main() {

    int P, S, N, T1, T2, T3, D1, D2, k = 0;


    while(scanf("%d %d", &P, &S) != EOF){
        if(P == 0 && S == 0){
            break;
        }

        int players[10] = {0};

        scanf("%d %d %d", &T1, &T2, &T3);
        scanf("%d", &N);

        k = 0;
        int stay[10] = {0};
        bool finished  = false;

        for (int i = 0; i < P; ++i) {
            scanf("%d %d", &D1, &D2);
            players[k] = D1 + D2;
            if(D1+D2 == T1 || D1+D2 == T2 || D1+D2 == T3){
                stay[k] = 1;
            } else if(D1+D2 > S){
                cout << k+1 << endl;
                finished = true;
                break;
            }
            k++;
        }


        if(!finished) {
            k = 0;
            for (int i = 0; i < N - P; ++i) {
                scanf("%d %d", &D1, &D2);

                if(k >= P){
                    k = 0;
                }

                while(stay[k] != 0){
                    stay[k] = 0;
                    k++;
                    if(k >= P){
                        k = 0;
                    }
                }
                players[k] += D1+D2;
                if(players[k] == T1 || players[k] == T2 || players[k] == T3){
                    stay[k] = 1;
                } else if(players[k] > S){
                    cout << k+1 << endl;
                    break;
                }
                k++;
            }
        }
    }

    return 0;
}