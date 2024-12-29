#include <iostream>
using namespace std;

int sum(int num) {
    int total = num;

    while (num > 0) {
        total += num % 10;
        num /= 10;
    }
    return total;
}

int find(int N) {
    for (int i = 1; i < N; i++) {
        if (sum(i) == N) {
            return i;
        }
    }
    return 0;
}

int main() {
    int N;
    cin >> N;
    cout << find(N) << endl;
    return 0;
}