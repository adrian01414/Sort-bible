#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "input.h"
#include "output.h"
#include "inssort.h"
#include "rand.h"
#include "heapsort.h"
int main() {
	int inpt = 0;
	while (inpt != 5) {
		int* arr = NULL, n;
		double t = 0;
		printf("Choose input:\n1) Random\n2) Keyboard\n3) Increase\n4) Decrease\n5) Quit\n");
		do {
			scanf("%d", &inpt);
			if (inpt < 0 || inpt > 5)
				printf("Error!\n");
		} while (inpt < 0 || inpt > 5);
		if (inpt == 1) {
			printf("Input size: ");
			scanf("%d", &n);
			arr = (int*)malloc(n * sizeof(int));
			randm(arr, n);
		}
		if (inpt == 2) {
			printf("Input size: ");
			scanf("%d", &n);
			arr = (int*)malloc(n * sizeof(int));
			input(arr, n);
		}
		if (inpt == 3) {
			printf("Input size: ");
			scanf("%d", &n);
			arr = (int*)malloc(n * sizeof(int));
			for (int i = 0; i < n; i++) {
				arr[i] = i;
			}
		}
		if (inpt == 4) {
			printf("Input size: ");
			scanf("%d", &n);
			arr = (int*)malloc(n * sizeof(int));
			for (int i = 0; i < n; i++) {
				arr[i] = n - i - 1;
			}
		}
		if (inpt != 5) {
			printf("Choose sort:\n1) Insertion\n2) Heap\n3)Not sorted\n");
			int c = 0;
			while (c != 1 && c != 2 && c != 3) {
				scanf("%d", &c);
				if (c != 1 && c != 2 && c != 3)
					printf("Error!\n");
			}
			if (c == 1) {
				inssort(arr, &t, n);
			}
			else if (c == 2) {
				heapsort(arr, &t, n);
			}

			output(arr, t, n);
		}
		if (inpt != 5) {
			inpt = 0;
		}
	}

	return 0;
}