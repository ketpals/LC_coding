#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void findNCA() {
    int T;
    cout<<"enter test cases:";
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> parent(N);
        for (int i = 0; i < N; ++i) {
            cin >> parent[i];
        }
        int x1, x2;
        cin >> x1 >> x2;
        
        unordered_set<int> pathX1;
        int current = x1;
        while (current != -1) {
            pathX1.insert(current);
            current = parent[current];
        }
        
        int nca = -1;
        current = x2;
        while (current != -1) {
            if (pathX1.find(current) != pathX1.end()) {
                nca = current;
                break;
            }
            current = parent[current];
        }
        cout << nca << endl;
    }
}

int main() {
    findNCA();
    return 0;
}
