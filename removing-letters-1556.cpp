#include <iostream>
#include <set>

using namespace std;

set<string> alr;

void generate(string word){
    if(alr.find(word) != alr.end()){
        return;
    }

    if(word.size() == 1){
        alr.insert(word);
        return;
    }

    alr.insert(word);

    for(int i = 0; i < word.size(); i++){
        string aux = word;

        aux.erase(aux.begin()+i);

        generate(aux);
    }
}

int main() {

    string inp;

    while (cin >> inp){
        generate(inp);
        for (set<string>::iterator it = alr.begin(); it != alr.end(); ++it) {
            cout << *it << '\n';
        }
        cout << '\n';
        alr.clear();
    }

}