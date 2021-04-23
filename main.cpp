#include<iostream>.

using namespace std;
int main()
{
	const int n = 8;
	char A[n][n] = {{'r','n','b','q','k','b','n','r'},
			{'p','p','p','p','p','p','p','p'},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{' ',' ',' ',' ',' ',' ',' ',' '},
			{'P','P','P','P','P','P','P','P'},
			{'R','N','B','Q','K','B','N','R'}};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j];
		}
	cout << endl;
	}
	return 0;
}


