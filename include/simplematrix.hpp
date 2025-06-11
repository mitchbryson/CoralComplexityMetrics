////////////////////////////////////////////////////
// simplematrix.hpp - Simple matrix functions
//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

double dot3x3(double *a, double *b);
double normdiff3(double *X, double*Y);
void cross3x3(double *a, double *b, double *c);
void MatVectorMult3x3(double *A, double *b, double *c);
void MatVectorMult4x4(double *A, double *b, double *c);
void MatVectorMult3x3Trans(double *A, double *b, double *c);
void MatMatMult3x3_4x3(double *A, double *B, double *C);
void MatMult3x3_2(double *A, double *B, double *C);
void Trans3x3(double *A, double *AT);
void Trans4x4(double *A, double *AT);

