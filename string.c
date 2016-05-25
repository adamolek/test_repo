#include <stdio.h>

size_t my_strlen(const char *s)
{
	const char *p = s;

	while (*p)
		++p;

	return (p - s);
}

int main(void)
{
	int i;
	char *s[] =
	{
		"Git tutorial",
		"Tutorials Point",
		"New string"
	};

	for(i = 0; i < 3; ++i)
		printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));

	return 0;
}
