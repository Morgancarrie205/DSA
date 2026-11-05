#include <stdio.h>

#define MAX 100

int main() {

    int arr[MAX];
    int size, i, position, value;
    int found = 0;

    // STEP 1: CREATE AN ARRAY

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 1 || size >= MAX) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // DISPLAY ORIGINAL ARRAY

    printf("\nOriginal Array: ");

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // STEP 2: INSERT A VALUE

    printf("\n\nEnter the position to insert: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (position < 1 || position > size + 1) {

        printf("Invalid position!\n");

    } else {

        for (i = size; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = value;
        size++;

        printf("\nArray after insertion: ");

        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    // STEP 3: DELETE A VALUE

    printf("\n\nEnter the value you want to delete: ");
    scanf("%d", &value);

    found = 0;

    for (i = 0; i < size; i++) {

        if (arr[i] == value) {

            found = 1;

            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }

            size--;

            break;
        }
    }

    if (found == 1) {

        printf("\nArray after deletion: ");

        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }

    } else {

        printf("\nValue not found in the array!\n");
    }

    return 0;
}