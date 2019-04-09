#include "header.h"


int main()
{
	float fValue;

	printf("Enter the percentage :");
	scanf_s("%f", &fValue);

	DisplayResult( fValue );

	printf("Hello 1\n");
	getchar();
	return 0;

}