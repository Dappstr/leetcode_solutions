#include <stdlib.h>
#include <stdio.h>

int* runningSum(int nums[], const int n) {
    int* output = (int*)malloc(n * sizeof(int));

    int num = 0;
    for(int x = 0; x < n; ++x) {
        num += nums[x];
        output[x] = num;
    }
    return output;
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    int* sums = runningSum(arr, size);

    for(int i = 0; i < size; ++i) {
        printf("%d ", sums[i]);
    }

    free(sums);

    return 0;
}
