#include "Gauss.h"

index gauss_2d_triangle_len(index gauss_k)
{
    index len = 1;
    switch (gauss_k) {
    case 1:
        len = 1;
        break;
    case 2:
        len = 3;
        break;
    case 3:
        len = 4;
        break;
    default:
        break;
    }

    return len;
}

vector<T> setGaussWeights_2d_triangle(index gauss_k)
{
    vector<T> weights(gauss_2d_triangle_len(gauss_k));
    if (gauss_k == 1) {
        weights = {1.0 / 2};
    }
    else if (gauss_k == 2) {
        weights = {1.0 / 6, 1.0 / 6, 1.0 / 6};
    }
    else if (gauss_k == 3) {
        weights = {-27.0 / 96, 25.0 / 96, 25.0 / 96, 25.0 / 96};
    }
    else {
        fprintf(stderr, "setGaussWeights_2d_triangle: gauss_k don't know\n");
        return vector<double>(gauss_k);
    }

    return weights;
}

matrix setGaussPoints_2d_triangle(index gauss_k)
{
    vector<double> temp(2, 0);
    matrix points(gauss_2d_triangle_len(gauss_k), temp);
    if (gauss_k == 1) {
        points[0] = {1.0 / 3, 1.0 / 3};
    }
    else if (gauss_k == 2) {
        points[0] = {1.0 / 2, 1.0 / 2};
        points[1] = {0, 1.0 / 2};
        points[2] = {1.0 / 2, 0};
    }
    else if (gauss_k == 3) {
        points[0] = {1.0 / 3, 1.0 / 3};
        points[1] = {1.0 / 5, 1.0 / 5};
        points[2] = {3.0 / 5, 1.0 / 5};
        points[3] = {1.0 / 5, 3.0 / 5};
    }
    else {
        fprintf(stderr, "setGaussPoints_2d_triangle: gauss_k don't know\n");
    }

    return points;
}