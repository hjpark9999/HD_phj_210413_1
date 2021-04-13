#include <stdio.h>

void main()
{
	int i = 1;
	int count;
	while (i <=4) {
		count = 1;
		while (count <= i) {
			printf("%d", count);
			count++;
				}
		i++;	
		printf("\n");
	}
	i=3;
	while (i >=1) {
		count = 1;
		while (count <= i) {
			printf("%d", count);
			count++;
		}
		i--;
		printf("\n");
	}
	fgetc(stdin);
}