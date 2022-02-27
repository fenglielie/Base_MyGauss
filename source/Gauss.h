#pragma once
#include "MyHead.h"

index gauss_1d_len(index gauss_k);
index gauss_2d_len(index gauss_k);
index gauss_2d_triangle_len(index gauss_k);

vector<T> setGaussPoints(index gauss_k);
vector<T> setGaussWeights(index gauss_k);

vector<T> setGaussWeights_2d(index gauss_k);
matrix setGaussPoints_2d(index gauss_k);

vector<T> setGaussWeights_2d_triangle(index gauss_k);
matrix setGaussPoints_2d_triangle(index gauss_k);