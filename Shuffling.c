#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int nums[2*n], result[2*n];

    printf("Enter %d elements:\n", 2*n);
    for(int i = 0; i < 2*n; i++)
        scanf("%d", &nums[i]);

    int idx = 0;
    for(int i = 0; i < n; i++) {
        result[idx++] = nums[i];      // x_i
        result[idx++] = nums[i + n];  // y_i
    }

    printf("Shuffled Array: [");
    for(int i = 0; i < 2*n; i++) {
        printf("%d", result[i]);
        if(i != 2*n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
