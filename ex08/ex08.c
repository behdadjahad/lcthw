#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1) {
		printf("you have only one argument you suck!\n");
	} else if (argc > 1 && argc < 4) {
		printf("these are your args:");

		for (i = 0 ; i < argc ; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("too many args.\n");
	}

	return 0;
	
}
