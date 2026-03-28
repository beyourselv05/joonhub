#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
    vector <int> vc(N);
	for(int i=0; i<N; i++)
	{
		cin >> vc[i];
	}

	int start=0, cnt=0;
	for(int i=N; i>0; i--)
	{
		if(start < vc[i-1])
		{
			start = vc[i-1];
			cnt++;
		}
	}

	cout << cnt;
}