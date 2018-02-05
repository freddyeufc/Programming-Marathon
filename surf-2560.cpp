#include <iostream>
#include <queue>
#define endl '\n'

using namespace std;

int main() {
    int N, B;
    while(scanf("%d %d", &N, &B) != EOF){
        long long int numbers[100] = {0};
        priority_queue<long long int> min;
        priority_queue<long long int, vector<long long int>, greater<long long int>> max;

        long long int largerSum = 0;
        long long int lessSum = 0;
        long long int sum = 0;
        long long int note = 0;
        long long int count = 0;
        long long int qtd;

        if(N/2 > N-B){
            qtd = N-B+1;
        } else {
            qtd = B;
        }

        for (int i = 0; i < B; ++i) {
            scanf("%d", &note);
            if (i < qtd-1){
                sum += (i+1) * note;
            } else if (i > (N-qtd)){
                sum += (N-1)*note;
            } else {
                sum += qtd*note;
            }
            max.push(note);
            min.push(note);
            numbers[note-1] = count;
            count++;
        }

        for (int i = B; i < N; ++i) {
            scanf("%d", &note);
            if(i < (qtd-1)){
                sum += (i+1)*note;
            } else if (i > (N - qtd)){
                sum += (N-i)*note;
            } else {
                sum += qtd*note;
            }
            largerSum += (int)max.top();
            max.push(note);
            lessSum += (int)min.top();
            min.push(note);
            numbers[note-1] = count;

            while (!(numbers[max.top()-1] + B - 1 >= count && (numbers[max.top()]-B+1 <= count))){
                max.pop();
            }
            while (!(numbers[min.top()-1] + B - 1 >= count) && (numbers[min.top()] -B+1 <= count)){
                min.pop();
            }

            count++;

        }

        largerSum += (int)max.top();
        lessSum += (int)min.top();
        cout << sum-largerSum-lessSum << endl;
    }
    return 0;
}