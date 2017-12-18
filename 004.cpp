#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int a[10];
	cout << "Enter elements:\n";
	string str;
	getline(cin, str);
	istringstream stream(str);
	for (int i = 0; i < 10; i++) 
	{
		if (!(stream >> a[i]))
		{
		  cout << "An error has occurred while reading numbers" << endl;
		  return 0;
		}
	}
	int k = 0;
	for (int i = 0; i < 10; i++) 
	{
		for (int j = i+1; j < 10; j++)
		{
			if (a[i] > a[j])
				k++;
		}
	}
	cout << "Result:\n" << k << endl;
    return 0;
}
