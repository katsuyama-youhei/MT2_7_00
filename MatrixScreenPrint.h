#pragma once
#include"Matrix.h"

static const int kRowHeight = 20;
static const int kColumnWidth = 64;

void MatrixScreenPrintf(int x, int y, Matrix2x2 matrix);

void MatrixScreenPrintf(int x, int y, Matrix3x3 matrix);