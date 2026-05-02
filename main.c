#include <stdio.h>
#include <Doremon.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    while(1) {
        execute_interpreter();
        printf("\nContinue? (1: Yes, 0: Exit): ");
        int choice; scanf("%d", &choice);
        if(choice == 0) break;
    }
    return 0;
}
