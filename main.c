#include <stdio.h>
#include <stdlib.h>
#include "spatialStatistics.h"

// helper function for visualization
void visualizeCells(FILE * filepointer);

int main() {
    FILE * fp = NULL;
    double mean_value = 0;

    /* open the file which the output will be written to */
    fp = fopen("report.txt", "w");

    /* if opening the file fails, exit the program */
    if (fp == NULL) {
        perror("Failed to open the file. Error ");
        exit(EXIT_FAILURE);
    }

    /* make computation of the adjacent cells for the mean value */
    mean_value = computeFromWindow(8, 5.0, 5.0, 5.0, 10.0, 10.0, 8.0, 8.0, 8.0);

    /* put all the data into a report */

    fprintf(fp, "\n\n[ # ] THE VISUALIZATION OF THE PROBLEM:\n\n");
    /* visualize neighbourhood cells */
    visualizeCells(fp);
    fprintf(fp,"[***] The question mark must be replaced with a mean value for other cells.\n[***] Although, other cells may contain missing value and may not be included in the computation.\n[***] Therefore, a variadic function was used to account for the variability of the number of arguments.\n");

    /* solution to the problem - the mean value */
    fprintf(fp,"\n[ # ] The mean value to replace the missing value: %lf\n", mean_value);

    /* close the file */
    fclose(fp);

    return 0;
}

void visualizeCells(FILE * filepointer) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i == 1) && (j == 1)) {
                fprintf(filepointer, "  ?  ");
            }
            else {
                fprintf(filepointer, "  #  ");
            }
        }
        fprintf(filepointer, "\n");
    }
}
