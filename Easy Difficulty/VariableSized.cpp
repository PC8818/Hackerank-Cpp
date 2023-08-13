#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;

int main() {
    int n, q;
    cin >> n >> q;

    int arrays[n][MAX_SIZE];
    int lengths[n];

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        lengths[i] = k;
        for (int j = 0; j < k; j++) {
            cin >> arrays[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << arrays[x][y] <<endl;
    }

    return 0;
}
