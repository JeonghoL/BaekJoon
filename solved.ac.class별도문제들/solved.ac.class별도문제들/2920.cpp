#include <iostream>
#include <string>
using namespace std;

// 좀 특이하게 풀어봄

int main()
{
	string str;
	getline(cin, str);
	if (str == "1 2 3 4 5 6 7 8")
		cout << "ascending";
	else if (str == "8 7 6 5 4 3 2 1")
		cout << "descending";
	else
		cout << "mixed";
}