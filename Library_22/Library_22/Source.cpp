#include <stdio.h>
#include <stdlib.h>
void Input_array(float *A, int k)
{
	for (int i = 0; i < k; i++)
		A[i] = (float)(rand() % 101) / (rand() % 11 + 1) - 5;
}
void Out_array(float *A, int k)
{
	for (int i = 0; i < k; i++)
		printf("%7.1f", A[i]);

	printf("\n");
}
float Srednee(float *A, int k, int n1, int n2)
{
	int x;  float s = 0, sred = 0;
	if (n1<0 || n1>k - 1)  return 0;
	if (n2<0 || n2>k - 1)  return 0;
	if (n1 >= n2) return 0;
	x = 0;
	for (int i = n1; i <= n2; i++)
	{
		s = s + A[i];
		x++;
	}
	if (x > 0) sred = s / x;
	return sred;
}
void Vstavka(float *A, int &k, float x, int n)
{
	if (n < k)
	{
		for (int i = k - 1; i >= n; i--)
			A[i + 1] = A[i];

		A[n] = x;
		k++;
	}
}
