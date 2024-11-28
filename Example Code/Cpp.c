#include <stdio.h>
#include <math.h>

int main()
{
    int count = 1;
    double PI = 3.1416;
    double perimeter = 0.0;
    int radiusArray2D[5][5];
    double areaArray2D[5][5];

    FILE *fptr;
    fptr = fopen("Circle-Data.txt", "w");
    if(fptr == NULL){
        printf("Error opening file!");
        return 0;
    }

    fprintf(fptr, "Serial No.\tRadius\t\tArea\t\tPerimeter\n\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            radiusArray2D[i][j] = count + i + j + 2;
            areaArray2D[i][j] = PI * radiusArray2D[i][j] * radiusArray2D[i][j];
            perimeter = 2 * PI * radiusArray2D[i][j];

            fprintf(fptr, "%d\t\t%d\t\t%.2f\t\t%.2f\n", count, radiusArray2D[i][j], areaArray2D[i][j], perimeter);
            count++;
        }
    }

    fclose(fptr);

    printf("\n\nTwo dimensional array of radius and corresponding Circle Areas:\n\n");
    printf("Radius\tArea\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t%.2f\n", radiusArray2D[i][j], areaArray2D[i][j]);
        }
    }
    printf("\nCircle Data successfully written to 'Circle-Data.txt'.\n");
    return 0;
}
