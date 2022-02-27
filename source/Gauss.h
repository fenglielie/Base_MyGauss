#pragma once
#include "MyHead.h"

vector<T> setGaussPoints(index gauss_k);
vector<T> setGaussWeights(index gauss_k);

vector<T> setGaussWeights_2d(index gauss_k);
matrix setGaussPoints_2d(index gauss_k);

vector<T> setGaussWeights_2d_triangle(index gauss_k);
matrix setGaussPoints_2d_triangle(index gauss_k);