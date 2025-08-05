#include <stdio.h>

int main() {
    int n, i, max, second;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = second = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        } else if(a[i] > second && a[i] != max)
            second = a[i];
    }

    printf("Second largest: %d\n", second);
    return 0;
}
