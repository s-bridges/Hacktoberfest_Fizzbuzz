//https://github.com/firefire-iceice
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 100; ++i) {
		if (!(i%3)) {
			if (!(i%5)) {
				printf("Spider\n");
			} else printf("Rat\n");
		} else if (!(i%5)) {
			printf("Ghost\n");
		} else printf("%d\n", i);
	}
	return 0;
}