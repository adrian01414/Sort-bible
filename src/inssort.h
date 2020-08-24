void swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void inssort(int arr[], double *t, int n) {
	double start = clock();
	int temp;
	for (int i = 1; i < n; i++) {
		temp = arr[i];
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] < temp) {
				break;
			}
			arr[j + 1] = arr[j];
			arr[j] = temp;
		}
	}
	double end = clock();
	*t = (end - start) / 1000;
}