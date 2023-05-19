#include <iostream>
#include <vector>
using namespace std;

void generatePermutations(int N, int K, vector<char>& permutation, vector<bool>& used) {
    if (permutation.size() == K) {
        for (char c : permutation) {
            cout << c;
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < N; i++) {
        if (!used[i]) {
            permutation.push_back('a' + i);
            used[i] = true;
            generatePermutations(N, K, permutation, used);
            permutation.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<char> permutation;
    vector<bool> used(N, false);
    generatePermutations(N, K, permutation, used);
    return 0;
}