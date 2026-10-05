#include <stdio.h>
int main() {
    int side1;
    int side2;
    int side3;

    printf("Enter the lenght of the 1st side: ");
    scanf("%d", &side1);
    printf("Enter the lenght of the 2nd side: ");
    scanf("%d", &side2);
    printf("Enter the lenght of the 3rd side: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}
