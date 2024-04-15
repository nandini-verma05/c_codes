#include <stdio.h>

int findSmallestMissingNumber(int arr[], int n) {
    int smallestMissing = 1; 

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0)
            continue; 

        if (arr[i] == smallestMissing)
            smallestMissing++; 
    }

    return smallestMissing;
}

int main() {
    int arr[] = {1,2,3,4,5,6,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallestMissing = findSmallestMissingNumber(arr, n);
    printf("The smallest missing number is: %d\n", smallestMissing);

    return 0;
}
