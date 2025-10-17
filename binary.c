#include <stdio.h>

int main() {
    int numbers[] = {2, 5, 8, 15}; 
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Binary output:\n");

    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        printf("%d in binary: ", num);

        
        for (int bit = 7; bit >= 0; bit--) {
            int binaryDigit = (num >> bit) & 1;  
            printf("%d", binaryDigit);
        }
        printf("\n");
    }

    return 0;
}
