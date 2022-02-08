#include <stdarg.h>
#include "spatialStatistics.h"

double computeFromWindow(int window_size, ...) {

    double sum = 0;
    va_list arguments;
    /* variable number of arguments - if some values are missing,
     * less than 8 arguments are provided.
     * the window_size variable indicates how many of the adjacent
     * cells are considered.
     */
    va_start(arguments, window_size);

    for (int i = 0; i < window_size; i++) {
        double element = va_arg(arguments, double);
        sum += element;
    }

    va_end(arguments);

    return sum / (double) window_size;
}

