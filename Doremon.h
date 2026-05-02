#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


void execute_interpreter() {
    char gadget[50];
    double v1 = 0, v2 = 0;

    printf("\n--- DOREMON-SCRIPT EXECUTION ENGINE ---\n");
    printf("Enter Gadget Name: ");
    scanf("%s", gadget);

    // 1-7: Arithmetic Functions
    if (strcmp(gadget, "BigLight") == 0) { // Sum
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %.2f\n", v1 + v2);
    } 
    else if (strcmp(gadget, "SmallLight") == 0) { // Sub[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %.2f\n", v1 - v2);
    } 
    else if (strcmp(gadget, "MemoryBread") == 0) { // Mul[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %.2f\n", v1 * v2);
    } 
    else if (strcmp(gadget, "AirCannon") == 0) { // Div[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        if(v2 != 0) printf("Result: %.2f\n", v1 / v2); else printf("Error: Div by zero\n");
    } 
    else if (strcmp(gadget, "Remnant") == 0) { // Mod[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %d\n", (int)v1 % (int)v2);
    } 
    else if (strcmp(gadget, "TurboProp") == 0) { // Pow[cite: 1]
        printf("Enter base and power: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %.2f\n", pow(v1, v2));
    } 
    else if (strcmp(gadget, "RootGadget") == 0) { // Sqrt[cite: 1]
        printf("Enter number: "); scanf("%lf", &v1);
        printf("Result: %.2f\n", sqrt(v1));
    }

    // 8-13: Comparison Functions
    else if (strcmp(gadget, "MirrorImage") == 0) { // Equal[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %s\n", (v1 == v2) ? "True" : "False");
    } 
    else if (strcmp(gadget, "Opposite") == 0) { // Not Equal[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %s\n", (v1 != v2) ? "True" : "False");
    } 
    else if (strcmp(gadget, "Gian") == 0) { // GT[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %s\n", (v1 > v2) ? "True" : "False");
    } 
    else if (strcmp(gadget, "Nobita") == 0) { // LT[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %s\n", (v1 < v2) ? "True" : "False");
    } 
    else if (strcmp(gadget, "BigGian") == 0) { // GE[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %s\n", (v1 >= v2) ? "True" : "False");
    } 
    else if (strcmp(gadget, "SmallNobita") == 0) { // LE[cite: 1]
        printf("Enter two numbers: "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %s\n", (v1 <= v2) ? "True" : "False");
    }

    // 14-16: Logical Functions
    else if (strcmp(gadget, "BestFriend") == 0) { // AND[cite: 1]
        printf("Enter two (1/0): "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %d\n", (int)v1 && (int)v2);
    } 
    else if (strcmp(gadget, "Choice") == 0) { // OR[cite: 1]
        printf("Enter two (1/0): "); scanf("%lf %lf", &v1, &v2);
        printf("Result: %d\n", (int)v1 || (int)v2);
    } 
    else if (strcmp(gadget, "Lies") == 0) { // NOT[cite: 1]
        printf("Enter (1/0): "); scanf("%lf", &v1);
        printf("Result: %d\n", !(int)v1);
    }

    // 17-18: I/O
    else if (strcmp(gadget, "ShowGadget") == 0) { // Print[cite: 1]
        printf("Result: Output successfully displayed!\n");
    } 
    else if (strcmp(gadget, "4DPocket") == 0) { // Input[cite: 1]
        printf("Ready to take input from pocket.\n");
    }

    // 19-25: Control Flow (Simulated Logic)
    else if (strcmp(gadget, "IfOnlyPhone") == 0) { // If[cite: 1]
        printf("Logic: Checking condition...\n");
    } 
    else if (strcmp(gadget, "Otherwise") == 0) { // Else[cite: 1]
        printf("Logic: Alternative path selected.\n");
    } 
    else if (strcmp(gadget, "TimeLoop") == 0) { // While[cite: 1]
        printf("Logic: Starting loop...\n");
    } 
    else if (strcmp(gadget, "TimeMachine") == 0) { // For[cite: 1]
        printf("Logic: Moving through sequence...\n");
    } 
    else if (strcmp(gadget, "AnywhereDoor") == 0) { // Break[cite: 1]
        printf("Logic: Exiting loop via Door.\n");
    } 
    else if (strcmp(gadget, "SkipTime") == 0) { // Continue[cite: 1]
        printf("Logic: Skipping current step.\n");
    } 
    else if (strcmp(gadget, "ReturnCheck") == 0) { // Return[cite: 1]
        printf("Logic: Returning value.\n");
    }

    // 26-27: Utility
    else if (strcmp(gadget, "Reality") == 0) { // Absolute[cite: 1]
        printf("Enter number: "); scanf("%lf", &v1);
        printf("Result: %.2f\n", fabs(v1));
    } 
    else if (strcmp(gadget, "SizeMeter") == 0) { // Length[cite: 1]
        char str[100];
        printf("Enter string: "); scanf("%s", str);
        printf("Length: %lu\n", strlen(str));
    }
    else {
        printf("Gadget not found!\n");
    }
}
