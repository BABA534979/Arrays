#include <stdio.h>

int main() {
    int n, i, pos, val;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n+1];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
