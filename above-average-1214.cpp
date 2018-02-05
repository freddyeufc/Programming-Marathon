#include <iostream>

using namespace std;

int main() {

    int C, N, total = 0;
    float note, average, sum;
    float notes[1000];

    scanf("%d", &C);

    for (int i = 0; i < C; ++i) {
        total = 0;
        sum = 0;
        scanf("%d", &N);

        for (int j = 0; j < N; ++j) {
            scanf("%f", &note);
            notes[j] = note;
            sum += note;
        }

        average = sum/N;

        for (int k = 0; k < N; ++k) {
            if(notes[k] > average){
                total++;
            }
        }
        
        printf("%.3f%c\n", ((total*100.000)/N), '%');
    }

    return 0;
}