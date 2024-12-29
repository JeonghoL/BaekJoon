#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		string N;
		cin >> N;
		if (N == "0")
			return 0;

		bool check{ true };
		for (int i = 0; i < N.length(); ++i)
		{
			if (N[i] != N[N.length() - 1 - i])
				check = false;
		}
		if (check)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}