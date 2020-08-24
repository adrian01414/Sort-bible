void output(int arr[], double t, int n) {
	int num = 0;
	printf("Output numbers?\n1) Yes \n2) No\n");
	scanf("%d", &num);
	if (num == 1) {
		for (int i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
	}
	printf("\nSorting time: %.3f second\n", t);
	free(arr);
	getchar();   getchar();
}
