#include <stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int MMax(int arr[], int N)
{
	int i = 0, j = 0, k = 0, sum = 0, max = 0;
	for (i = 0; i < N; i++)
	{
		for (j = i; j < N; j++)
		{
			for (k = i; k <= j; k++)
			{
				sum = sum + arr[k];
			}
			if (sum > max)
			{
				max = sum;
			}
			sum = 0;
		}
	}
	return max;
}
int main()
{
	int* arr;
	int N = 0, input = 0, i = 0;
	int Max = 0;
	cin >> N;
	arr = (int*)malloc(sizeof(int) * N);
	int minus = 0;
	if (N < 0)
	{
		printf("ERROR");
		return 0;
	}

	//对数组进行赋初值，并且记录负数个数
	for (i = 0; i < N; i++)
	{
		cin >> input;
		arr[i] = input;
		if (input < 0)
		{
			minus++;
		}
	}

	//如果全为负数，直接输出0，并结束程序
	if (minus == N)
	{
		cout << 0;
		return 0;
	}

	//对最大子数组进行求解并输出
	Max = MMax(arr, N);
	cout << Max;
	return 0;
}
