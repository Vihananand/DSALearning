void insertElement(int arr[], int *size, int value) {
    (*size)++;
    arr[*size - 1] = value;

    int i = *size - 1;
    while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(&arr[i], &arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}