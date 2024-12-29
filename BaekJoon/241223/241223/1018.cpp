#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    char* p = new char[N * M];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> p[j + (M * i)];

    int min_changes = 64;

    for (int a = 0; a <= N - 8; ++a)
    {
        for (int b = 0; b <= M - 8; ++b)
        {
            int count1 = 0, count2 = 0;

            for (int i = 0; i < 8; ++i)
            {
                for (int j = 0; j < 8; ++j)
                {
                    char current = p[(a + i) * M + (b + j)];
                    bool should_be_white = (i + j) % 2 == 0;

                    if (should_be_white && current != 'W') count1++;
                    if (!should_be_white && current != 'B') count1++;

                    if (should_be_white && current != 'B') count2++;
                    if (!should_be_white && current != 'W') count2++;
                }
            }

            min_changes = min(min_changes, min(count1, count2));
        }
    }

    cout << min_changes;
    delete[] p;
    return 0;
}