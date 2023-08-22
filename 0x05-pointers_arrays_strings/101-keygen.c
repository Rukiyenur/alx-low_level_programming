#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int sum = 0;
	char password[84];

	srand(time(NULL));

	for (int i = 0; i < 84; i++)
{
	password[i] = rand() % 62;
	if (password[i] < 10)
{
	password[i] += '0';
}
	else if (password[i] < 36)
{
	password[i] += 'a' - 10;
}
	else
{
	password[i] += 'A' - 36;
}
	sum += password[i];
}

	password[82] = (sum - 2772) % 62;
	if (password[82] < 10)
{
	password[82] += '0';
}
	else if (password[82] < 36)
{
	password[82] += 'a' - 10;
}
	else
{
	password[82] += 'A' - 36;
}

	password[83] = '\0';

	printf("%s", password);

	return (0);
}
