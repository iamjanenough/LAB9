#include <iostream>
using namespace std;

void printO(int N, int M) {
    if (N <= 0 || M <= 0) {
        cout << "Invalid input";
        return;
    }

    for (int i = 0; i < N; i++) {        // loop แถว
        for (int j = 0; j < M; j++) {    // loop ตัว O
            cout << "O";
        }
        cout << endl;
    }
}
0