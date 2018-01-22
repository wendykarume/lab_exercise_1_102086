// program to convert decimal numbers to binary
# include <iostream>
# include <string>
# include <cctype>
using namespace std;
int main()
{
	int num;
	int bin;
	string final;
	cout << "Enter decimal number to be converted to binary: ";
	cin >> num;
	while (num != 0)
	{
		if (num % 2 != 0)
			{
			num = num / 2;
			bin = 1;
			cout << bin;
			}
		else
			{
			num = num / 2;
			bin = 0;
			cout << bin;
			}
	}
	return 0;
}
