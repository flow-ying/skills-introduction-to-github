#include <iostream>
using namespace std;
#include <string>;
int main() {
	string str;
	getline(cin, str);
	int num = (str[0] - '0') * 1 + (str[2] - '0') * 2 + (str[3] - '0') * 3 +
		(str[4] - '0') * 4 + (str[6] - '0') * 5 + (str[7] - '0') * 6 +
		(str[8] - '0') * 7 + (str[9] - '0') * 8 + (str[10] - '0') * 9;
	if (str[12] == 'X')
	{
		if (num % 11 == 10)
		{
			cout << "Right" << endl;
			return 0;
		}
	}
	if (num % 11 == (str[12] - '0'))
	{
		cout << "Right" << endl;
	}
	else
	{
		if (num % 11 == 10)
		{
			string str2 = str.substr(0, 12) + 'X';
			cout << str2 << endl;
			return 0;
		}
		string str2 = str.substr(0, 12) + to_string(num % 11);
		cout << str2 << endl;
	}
	return 0;
}