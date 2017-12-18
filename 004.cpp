#include <iostream>
#include <sstream>

using namespace std;

bool read(int *a) 
{
  char check;
	string str;
	getline(cin, str);
	istringstream stream(str);
	for (int i = 0; i < 10; i++) 
	{
		if (!(stream >> a[i]))
			return false;
	}
	if (stream >> check)
		return false;
	return true;
}
int count(int * a) {
	int k = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++){
			if (a[i] > a[j]) {
				k++;
			}
		}
	}
	return k;
}
int main()
{
	int a[10];
	cout << "Enter elements:\n";
	if (!(read(a))) 
	{
		cout << "An error has occurred while reading numbers" << endl;
		return 0;
	}
	cout << "Result:\n" << count(a) << endl;
    return 0;
}
