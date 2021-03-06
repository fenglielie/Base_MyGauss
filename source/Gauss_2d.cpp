#include "Gauss.h"

index gauss_2d_len(index gauss_k)
{
    if (gauss_k > 0)
        return gauss_k * gauss_k;
    else
        return 1;
}


vector<T> setGaussWeights_2d(index gauss_k)
{
    vector<T> v(gauss_2d_len(gauss_k), 0);
    vector<T> weights = setGaussWeights(gauss_k);
    index k = 0;
    for (index i = 0; i < gauss_k; i++) {
        for (index j = 0; j < gauss_k; j++) {
            v[k] = weights[i] * weights[j];
            k++;
        }
    }
    return v;
}

matrix setGaussPoints_2d(index gauss_k)
{
    vector<T> temp(2, 0);
    matrix points_matrix(gauss_2d_len(gauss_k), temp);
    vector<T> points = setGaussPoints(gauss_k);
    index k = 0;
    for (index i = 0; i < gauss_k; i++) {
        for (index j = 0; j < gauss_k; j++) {
            points_matrix[k][0] = points[i];
            points_matrix[k][1] = points[j];
            k++;
        }
    }
    return points_matrix;
}