#include <stdio.h>

int main() {
    int a[100], n, key;
    int low = 0, high, mid;
    int flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            flag = 1;
            break;
        }
        else if(a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(flag == 0) {
        printf("Element not found\n");
    }

    return 0;
}
