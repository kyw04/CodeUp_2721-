#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> str(3);
	for (auto& a : str)
		cin >> a;
	if (str[0][str[0].length() - 1] == str[1][0] && str[1][str[1].length() - 1] == str[2][0] && str[2][str[2].length() - 1] == str[0][0])
		cout << "good";
	else
		cout << "bad";
	return 0;
}