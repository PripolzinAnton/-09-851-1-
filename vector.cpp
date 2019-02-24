#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, i, x; vector <int> A;
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	fin >> x;
	while (x != 0)
	{
		A.push_back(x);
		fin >> x;
	}
	sort(A.begin(), A.end());
	for (i = 0; i < A.size(); i++)
	{
		fout << A[i] << " ";
	}
	fin.close();
	fout.close();
	return 0;



}