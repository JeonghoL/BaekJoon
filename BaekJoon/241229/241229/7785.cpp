#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 해결 못함 - 여기부터 진행

struct People {
	string name;
	string state;
};

bool compare(const People& a, const People& b)
{
	return a.name > b.name;
}

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<People> p;
	for (int i = 0; i < n; ++i)
	{
		People in;
		cin >> in.name >> in.state;
		p.push_back(in);
	}

	sort(p.begin(), p.end(), compare);

	for (int i = 0; i < n - 1; )
	{
		if (p[i].name == p[i + 1].name)
		{
			p.erase(p.begin() + i);
			--n;
		}
		else
			++i;
	}

	for (int i = 0; i < n; ++i)
	{
		if (p[i].state == "enter")
			cout << p[i].name << '\n';
	}
}