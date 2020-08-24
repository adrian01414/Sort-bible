void heapify(int* arr, int i, int s) {
    int largest;
    int done = 0;
    while ((i * 2 <= s) && (!done))
    {
        if (i * 2 == s)
            largest = i * 2;
        else if (arr[i * 2] > arr[i * 2 + 1])
            largest = i * 2;
        else
            largest = i * 2 + 1;
        if (arr[i] < arr[largest])
        {
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
            i = largest;
        }
        else
            done = 1;
    }
}
void heapsort(int arr[], double* t, int n) {
	double start = clock();
    for (int i = (n / 2) - 1; i >= 0; i--)
        heapify(arr, i, n - 1);
    for (int i = n - 1; i >= 1; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, 0, i - 1);
    }
	double end = clock();
	*t = (end - start) / 1000;
}
