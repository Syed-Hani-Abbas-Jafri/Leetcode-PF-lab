#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Replace evens with 0, odds with 1
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    // Sort the array (simple bubble sort for clarity)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // Print result
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]");

    return 0;
}
