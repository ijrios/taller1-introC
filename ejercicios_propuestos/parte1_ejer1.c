#include <stdio.h>

int main() {
    char nom[] = "Jose";
    
    // 1
    printf("\"%s\"\n",nom);
    // 2
    printf("%+20s\n",nom);
    // 3
    printf("%-20s\n",nom);
    // 4
    printf("%8s\n",nom);

    return 0;

}