#include<stdio.h>

//celsius = 5.0/9.0 * (fahrenheight - 32)

int main() {
    int fh;
    double cels,x;

        printf("Enter Fh temperature you want converted to Celsius;\n");
        scanf("%d",&fh);

    if (fh >= 0 && fh <= 212) {
        cels = 5.0 / 9.0 * (fh - 32);
        printf("\n\tConverted Temp: %.2f\n\n", cels);

    }
    else {
        printf("\t Invalid number, must be between 0 and 212! \n\n");
    }

    }











