#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Man {
	int age;
	string name;
	int index;
};

bool compare(const Man&, const Man&);

int main()
{
	int N;
	cin >> N;
	
	Man* m = new Man[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> m[i].age >> m[i].name;
		m[i].index = i;
	}
	
	sort(m, m + N, compare);

	for (int i = 0; i < N; ++i)
		cout << m[i].age << " " << m[i].name << "\n";

	delete[] m;
}

bool compare(const Man& a, const Man& b)
{
	if (a.age == b.age)
		return a.index < b.index;
	return a.age < b.age;
}