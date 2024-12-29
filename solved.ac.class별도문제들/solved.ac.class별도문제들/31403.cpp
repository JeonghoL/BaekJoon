#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    cout << A + B - C << endl;

    string str_A = to_string(A);
    string str_B = to_string(B);
    string str_C = to_string(C);

    string AB = str_A + str_B;
    int result = stoi(AB) - C;

    cout << result << endl;

    return 0;
}