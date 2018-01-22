# include <iostream>
# include <string>
# include <cctype>
using namespace std;
int main()
{
string name;
cout << "Input name: ";
getline(cin, name);
if (name.length() < 4)
	cout << "Invalid input, try again" << endl;
else
	cout << "Welcome " << name << endl;
return 0;
}
