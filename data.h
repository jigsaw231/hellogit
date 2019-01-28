#include <iostream>
#include <vectors>
using namespace std;
int main()
{
	vector<char> v;
	vector<int> v1 = {10, 14, 32, 64, 16}

	v.push_back('p');
	v1.pop_back();
	
	v.push_back('i')
	v1.pop_back();
	
	for(int i = 0; i < 4; i++)
	{
		v1.push_back(0);
	}
	for (int i = 0; i < v1.size() ; i++)
	{
		cout<<v1[i]<<" ";
	}
	return 0;
	system("pause")
}
