#include <stdio.h>

void func(void);

int main(void) {
	int dogs;

	func();
	printf("How many dogs do you have?\n");
	scanf("%d", &dogs);
	printf("So you have %d dog(s)!\n", dogs);

	return 0;
}

void func(void) {
	printf("gui");
}
