#include "Transpose.h"

Matrix2x2 Transpose(Matrix2x2 matrix) {
	Matrix2x2 copy = matrix;
	matrix.m[0][0] = copy.m[0][0];
	matrix.m[0][1] = copy.m[1][0];
	matrix.m[1][0] = copy.m[0][1];
	matrix.m[1][1] = copy.m[1][1];
	return matrix;
}

Matrix3x3 Transpose(Matrix3x3 matrix) {
	Matrix3x3 copy = matrix;
	matrix.m[0][0] = copy.m[0][0];
	matrix.m[0][1] = copy.m[1][0];
	matrix.m[0][2] = copy.m[2][0];
	matrix.m[1][0] = copy.m[0][1];
	matrix.m[1][1] = copy.m[1][1];
	matrix.m[1][2] = copy.m[2][1];
	matrix.m[2][0] = copy.m[0][2];
	matrix.m[2][1] = copy.m[1][2];
	matrix.m[2][2] = copy.m[2][2];
	return matrix;
}