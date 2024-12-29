#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string N;
	cin >> N;

	for (int i = 0; i < N.length()-1; ++i)
	{
		for (int j = 0; j < N.length() - 1; ++j)
		{
			if (N[j + 1] > N[j])
			{
				char temp(N[j]);
				N[j] = N[j + 1];
				N[j + 1] = temp;
			}
		}
	}
	
	cout << N;
}