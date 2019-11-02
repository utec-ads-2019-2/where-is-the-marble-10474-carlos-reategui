#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    unsigned int N, Q, caseCount = 1;
    while (cin >> N >> Q and N != 0 and Q != 0) {
        cout << "CASE# " << caseCount++ << ":" << endl;

        vector<unsigned int> numbersOnMarblesVector;

        unsigned int n;
        for (unsigned int i = 0; i < N; ++i) {
            cin >> n;
            numbersOnMarblesVector.push_back(n);
        }

        sort(numbersOnMarblesVector.begin(), numbersOnMarblesVector.end());

        unsigned int attempt;
        for (unsigned int i = 0 ; i < Q; ++i) {
            cin >> attempt;
            bool found = false;
            for (unsigned int j = 0; j < N and !found; ++j) {
                if (numbersOnMarblesVector[j] == attempt) {
                    cout << attempt << " found at " << j + 1 << endl;
                    found = true;
                }
            }
            if (found) continue;
            cout << attempt<< " not found" << endl;
        }
    }
    return EXIT_SUCCESS;
}