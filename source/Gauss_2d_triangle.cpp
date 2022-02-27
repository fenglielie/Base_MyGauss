#include "Gauss.h"

vector<T> setGaussWeights_2d_triangle(index gauss_k)
{
    vector<T> weights;
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
        fprintf(stderr, "setGaussWeights_2d_triangle: gauss_k don't know, reset gauss_k = 3\n");
        weights = {-27.0 / 96, 25.0 / 96, 25.0 / 96, 25.0 / 96};
    }

    return weights;
}

matrix setGaussPoints_2d_triangle(index gauss_k)
{
    vector<double> temp(2, 0);
    if (gauss_k == 1) {
        matrix points(1, temp);
        points[0] = {1.0 / 3, 1.0 / 3};

        return points;
    }
    else if (gauss_k == 2) {
        matrix points(3, temp);
        points[0] = {1.0 / 2, 1.0 / 2};
        points[1] = {0, 1.0 / 2};
        points[2] = {1.0 / 2, 0};

        return points;
    }
    else if (gauss_k == 3) {
        matrix points(4, temp);
        points[0] = {1.0 / 3, 1.0 / 3};
        points[1] = {1.0 / 5, 1.0 / 5};
        points[2] = {3.0 / 5, 1.0 / 5};
        points[3] = {1.0 / 5, 3.0 / 5};

        return points;
    }
    else {
        fprintf(stderr, "setGaussPoints_2d_triangle: gauss_k don't know, reset gauss_k = 3\n");
        matrix points(4, temp);
        points[0] = {1.0 / 3, 1.0 / 3};
        points[1] = {1.0 / 5, 1.0 / 5};
        points[2] = {3.0 / 5, 1.0 / 5};
        points[3] = {1.0 / 5, 3.0 / 5};

        return points;
    }
}