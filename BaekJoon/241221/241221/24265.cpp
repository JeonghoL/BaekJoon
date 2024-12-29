#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	long long int tot{};

	for (int i = 1; i < n; ++i)
	{
		for (int j = i + 1; j < n + 1; ++j)
			tot++;
	}
	cout << tot << endl << "2" << endl;
}