#include <iostream>
using namespace std;
int main()
{
	int m; 
	cin >> m;
	switch (m)
	{
	case 12:cout << "winter\n"; break;
	case 1:cout << "winter\n"; break;
	case 2:cout << "winter\n"; break;
	case 3:cout << "spring\n"; break;
	case 4:cout << "spring\n"; break;
	case 5:cout << "spring\n"; break;
	case 6:cout << "summer\n"; break;
	case 7:cout << "summer\n"; break;
	case 8:cout << "summer\n"; break;
	case 9:cout << "autumn\n"; break;
	case 10:cout << "autumn\n"; break;
	case 11:cout << "autumn\n"; break;
	default:cout << "NO\n";
	}
	system("pause");
	return 0;
}