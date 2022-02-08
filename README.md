# Mean value for the middle cell
This short project is based on a concept that mean of adjacent cells can be applied for the middle cell of an unknown value. The project relies on a variadic function to which a maximum of 8 arguments can be passed. If less arguments are passed, then the assumption is that there are missing values for the adjacent cells and they are not included in the computation.
### Compile
gcc main.c spatialStatistics.c -o assignMean
### Report
The communication is maintained through a report file (report.txt)
It can be opened to find the mean value.