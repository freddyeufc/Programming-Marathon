#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#define endl '\n'


using namespace std;

int main() {

    int a,b,c,d, result = -1;
    vector<int> div;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int aux = sqrt(c);

    for (int i = 1; i <= aux; ++i) {
        if(c%i == 0){
            div.push_back(i);
            div.push_back(c/i);
        }
    }

    sort(div.begin(), div.end());

    for (int i = 0; i < div.size(); ++i) {
        if(div[i]%a == 0 && div[i]%b != 0 && (d/div[i])*div[i] != d){
            result = div[i];
            break;
        }
    }
    cout << result << endl;
    return 0;
}