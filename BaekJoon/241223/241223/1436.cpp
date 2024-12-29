#include <iostream>
#include <string>
using namespace std;

bool has666(int n) {
    string num = to_string(n);
    return num.find("666") != string::npos;
}

int main() {
    int N;
    cin >> N;

    int count = 0;
    int num = 666;

    while (count < N) {
        if (has666(num)) {
            count++;
        }
        if (count < N) {
            num++;
        }
    }

    cout << num;
    return 0;
}