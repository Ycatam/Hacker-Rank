#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char s[100];
    char s1[100] ={"Hello, World!"};

    scanf("%[^\n]%*c", s);
    printf("%s \n",s1);
    printf("%s",s);
    return 0;
}
