#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], runningSum[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    runningSum[0] = nums[0];
    for(int i = 1; i < n; i++)
        runningSum[i] = runningSum[i - 1] + nums[i];

    printf("Running Sum: [");
    for(int i = 0; i < n; i++) {
        printf("%d", runningSum[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
