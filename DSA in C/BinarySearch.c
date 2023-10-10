#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = 9;
    int target = 2;

    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            printf("Element %d found at index %d\n", target, mid);
            break;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    

    return 0;
}
