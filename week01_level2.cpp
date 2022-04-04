#include <stdio.h>
#include <string.h>

char inputStr[100];

int main()
{
	scanf("%s", inputStr);
	int len = strlen(inputStr);
	for (int i = 0; i < len; i++) {
		if (inputStr[i] >= 'a' && inputStr[i] <= 'z') inputStr[i] = inputStr[i] - 32;
		else if (inputStr[i] >= 'A' && inputStr[i] <= 'Z') inputStr[i] = inputStr[i] + 32;
		else printf("Error! \n");
	}
	printf("%s", inputStr);

	return 0;
}