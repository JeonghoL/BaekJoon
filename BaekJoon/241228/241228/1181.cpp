#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

bool compare(const string& a, const string& b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main()
{
    int N;
    cin >> N;
    string* str = new string[N];
    for (int i = 0; i < N; ++i)
        cin >> str[i];

    sort(str, str + N, compare);  

    for (int i = 0; i < N - 1;)
    {
        if (str[i] == str[i + 1])
        {
            for (int j = i + 1; j < N - 1; ++j)
                str[j] = str[j + 1];
            --N;
        }
        else
            ++i;
    }

    for (int i = 0; i < N; ++i)
        cout << str[i] << '\n';

    delete[] str;  
}