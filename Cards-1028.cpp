#include <stdio.h>
#include <iostream>
#define endl '\n'

using namespace std;

int main(){

    int N, f1, f2, aux;

    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        scanf("%d %d", &f1, &f2);

        if(f1 > f2){
            aux = f1;
            f1 = f2;
            f2 = aux;
        }

        for (;f2%f1 !=0;) {
            aux = f1;
            f1 = f2%f1;
            f2 = aux;
        }
        cout << f1 << endl;

    }

    return 0;
}