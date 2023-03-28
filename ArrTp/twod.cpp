#define _CRT_SECURE_NO_WARNINGS 1
#include"arraytp.h"


int main(char argc, char** argv)
{
	ArrayTp<int, 10> sums;
	ArrayTp<double, 10> aver;
	ArrayTp<ArrayTp<int, 5>, 10> twodee;
	int i, j;
	for (i = 0; i < 10; i++)
	{
		sums[i] = 0;
		for (j = 0; j < 5; j++)
		{
			twodee[i][j] = (i + 1)*(j + 1);
			sums[i] += twodee[i][j];
		}
		aver[i] = (double)sums[i] / 10;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout.width(3);
			cout << twodee[i][j] << ' ';
		}
		cout << ": sum=";
		cout.width(3);
		cout << sums[i] << ",average =" << aver[i] << endl;
	}
	cout << "done.\n";
	return 0;
}