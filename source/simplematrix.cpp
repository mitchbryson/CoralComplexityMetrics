////////////////////////////////////////////////////
// simplematrix.cpp - Simple matrix functions
//

#include "simplematrix.hpp"

// dot3x3 - dot product a.b
double dot3x3(double *a, double *b)
{
	double c;
	c = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
	return c;
}

// normdiff3 - l2 norm of the difference of two 3x1 vectors
double normdiff3(double *X, double*Y)
{
	return(sqrt((X[0]-Y[0])*(X[0]-Y[0]) + (X[1]-Y[1])*(X[1]-Y[1]) + (X[2]-Y[2])*(X[2]-Y[2])));
}

// cross3x3 - cross product c = a x b
void cross3x3(double *a, double *b, double *c)
{
	c[0] = a[1]*b[2] - a[2]*b[1];
	c[1] = a[2]*b[0] - a[0]*b[2];
	c[2] = a[0]*b[1] - a[1]*b[0];
}

// MatVectorMult3x3 - Matrix multiplication for c = A*b
void MatVectorMult3x3(double *A, double *b, double *c)
{
	c[0] = A[0]*b[0] + A[1]*b[1] + A[2]*b[2];
	c[1] = A[3]*b[0] + A[4]*b[1] + A[5]*b[2];
	c[2] = A[6]*b[0] + A[7]*b[1] + A[8]*b[2];
}

// MatVectorMult4x4 - Matrix multiplication for c = A*b
void MatVectorMult4x4(double *A, double *b, double *c)
{
	c[0] = A[0]*b[0] + A[1]*b[1] + A[2]*b[2] + A[3]*b[3];
	c[1] = A[4]*b[0] + A[5]*b[1] + A[6]*b[2] + A[7]*b[3];
	c[2] = A[8]*b[0] + A[9]*b[1] + A[10]*b[2] + A[11]*b[3];
	c[3] = A[12]*b[0] + A[13]*b[1] + A[14]*b[2] + A[15]*b[3];
}

// MatVectorMult3x3Trans - Matrix multiplication for c = A^T*b
void MatVectorMult3x3Trans(double *A, double *b, double *c)
{
	c[0] = A[0]*b[0] + A[3]*b[1] + A[6]*b[2];
	c[1] = A[1]*b[0] + A[4]*b[1] + A[7]*b[2];
	c[2] = A[2]*b[0] + A[5]*b[1] + A[8]*b[2];
}

// MatMatMult3x3_4x3 - Matrix multiplication for C = A*B
void MatMatMult3x3_4x3(double *A, double *B, double *C)
{
	C[0] = A[0]*B[0] + A[1]*B[4] + A[2]*B[8];
	C[1] = A[0]*B[1] + A[1]*B[5] + A[2]*B[9];
	C[2] = A[0]*B[2] + A[1]*B[6] + A[2]*B[10];
	C[3] = A[0]*B[3] + A[1]*B[7] + A[2]*B[11];
	
	C[4] = A[3]*B[0] + A[4]*B[4] + A[5]*B[8];
	C[5] = A[3]*B[1] + A[4]*B[5] + A[5]*B[9];
	C[6] = A[3]*B[2] + A[4]*B[6] + A[5]*B[10];
	C[7] = A[3]*B[3] + A[4]*B[7] + A[5]*B[11];
	
	C[8] = A[6]*B[0] + A[7]*B[4] + A[8]*B[8];
	C[9] = A[6]*B[1] + A[7]*B[5] + A[8]*B[9];
	C[10] = A[6]*B[2] + A[7]*B[6] + A[8]*B[10];
	C[11] = A[6]*B[3] + A[7]*B[7] + A[8]*B[11];
}

// MatMult3x3 - Matrix multiplication for C = A*B
void MatMult3x3_2(double *A, double *B, double *C)
{
	C[0] = A[0]*B[0] + A[1]*B[3] + A[2]*B[6];
	C[1] = A[0]*B[1] + A[1]*B[4] + A[2]*B[7];
	C[2] = A[0]*B[2] + A[1]*B[5] + A[2]*B[8];

	C[3] = A[3]*B[0] + A[4]*B[3] + A[5]*B[6];
	C[4] = A[3]*B[1] + A[4]*B[4] + A[5]*B[7];
	C[5] = A[3]*B[2] + A[4]*B[5] + A[5]*B[8];

	C[6] = A[6]*B[0] + A[7]*B[3] + A[8]*B[6];
	C[7] = A[6]*B[1] + A[7]*B[4] + A[8]*B[7];
	C[8] = A[6]*B[2] + A[7]*B[5] + A[8]*B[8];
}

// Trans3x3 - Transpose of 3x3 matrix
void Trans3x3(double *A, double *AT)
{

	AT[0] = A[0];
	AT[1] = A[3];
	AT[2] = A[6];

	AT[3] = A[1];
	AT[4] = A[4];
	AT[5] = A[7];

	AT[6] = A[2];
	AT[7] = A[5];
	AT[8] = A[8];

}

// Trans4x4 - Transpose of 4x4 matrix
void Trans4x4(double *A, double *AT)
{

	AT[0] = A[0];
	AT[1] = A[4];
	AT[2] = A[8];
	AT[3] = A[12];
	
	AT[4] = A[1];
	AT[5] = A[5];
	AT[6] = A[9];
	AT[7] = A[13];
	
	AT[8] = A[2];
	AT[9] = A[6];
	AT[10] = A[10];
	AT[11] = A[14];
	
	AT[12] = A[3];
	AT[13] = A[7];
	AT[14] = A[11];
	AT[15] = A[15];
}
