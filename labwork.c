#include <stdio.h>

int main() {
  
    int gra;

    
    printf("Enter Your grade: ");
    scanf("%d", &gra);

    if (gra < 45) {
        printf("You failed the course.\n");
    } else {
        printf("You passed the course.\n");
    }
    
    /*if (gra >= 90 && not <= 100) {
        printf("Your grad: A\n");
    } else if (not >= 75 && not <= 89) {
        printf("Your grade B\n");
    } else if (not >= 55 && not <= 74) {
        printf("Your grade: C\n");
    } else if (not >= 45 && not <= 54) {
        printf("Your grade: D\n");
    } else if (not >= 0 && not <= 44) {
        printf("Your grade: F\n");
    } else {
        printf("Invalid grade!\n");
    }*/

    return 0;
}