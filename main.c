#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	printf("Hello from test!\n");

	FILE *bash_input;
	bash_input = popen("./test.sh", "r");

	int result = 0;
	fscanf(bash_input, "%d", &result);
	printf("Number from bash: %d\n", result);

	return 0;
}
