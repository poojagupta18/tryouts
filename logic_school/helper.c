#include "Header.h"

void DisplayResult(
					float fVal
				)

{
	if (fVal < 0 || fVal > 100) 
	{
		printf("Ivalid input.");
		return;
	}
	if (fVal > 75)
	{
		printf("First class with distinction.");
	}
	else if (fVal > 60)
	{
		printf("First class.");
	}
	else if (fVal > 50)
	{
		printf("second class.");
	}
	else if (fVal > 35)
	{
		printf("Pass class.");
	}
	else {
		printf("Failed");
	}

}