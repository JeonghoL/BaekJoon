#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int H, W, N; 
        cin >> H >> W >> N;

        int floor; 
        int room;  

        if (N % H == 0) {
            floor = H;
            room = N / H;
        }
        else {
            floor = N % H;
            room = N / H + 1;
        }

        cout << floor;
        if (room < 10) cout << "0";
        cout << room << endl;
    }

    return 0;
}