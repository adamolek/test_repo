#include <stdio.h>

size_t my_strlen(const char *s)
{
	const char *p = s;

	while (*p)
		++p;

	return (p - s);
}

char *my_strcpy(char *t, char *s)
{
	char *p = t;
	while (*t++ = *s++);
	return p;
}

int main(void)
{
	int i;
	char *s[] =
	{
		"Git tutorial",
		"Tutorials Point",
		"New string",
		"String from test_branch"
	};

	for(i = 0; i < 4; ++i)
		printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));

	return 0;
}
