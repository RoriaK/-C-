#include <stdio.h>

int main()
{
	int A[3] = {1,2,3};
	int B[10];
	int i;

	const int num_A = sizeof(A) / sizeof(A[0]);
	const int num_B = sizeof(B) / sizeof(int);

	for (i = 0; i < num_B; i++)
	{
		B[i] = A[i % num_A];
	}
	for (i = 0; i < num_B; i++)
	{
		printf("%5d", B[i]);
	}
	
	return 0;
}