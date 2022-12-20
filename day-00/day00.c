#include <stdio.h>

#include <string.h>

int main() {

char name[20];

printf("Name: "); scanf("%[^\n]s", name);

if (strlen(name)) printf("Hello, %s", name);

else

printf("Hello, SJEC");}
