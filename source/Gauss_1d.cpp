#include "Gauss.h"

index gauss_1d_len(index gauss_k)
{
    if (gauss_k > 0)
        return gauss_k;
    else
        return 1;
}

// gauss points
vector<T> setGaussPoints(index gauss_k)
{
    vector<T> points(gauss_1d_len(gauss_k), 0);
    if (gauss_k == 1) {
        points[0] = 0;
    }
    else if (gauss_k == 2) {
        points[0] = -0.577350269189625765;
        points[1] = -points[0];
    }
    else if (gauss_k == 3) {
        points[0] = -0.774596669241483377;
        points[1] = 0;
        points[2] = -points[0];
    }
    else if (gauss_k == 5) {
        points[0] = -0.9061798459386640;
        points[1] = -0.5384693101056831;
        points[2] = 0;
        points[3] = -points[1];
        points[4] = -points[0];
    }
    else if (gauss_k == 7) {
        points[0] = -0.9491079123427580;
        points[1] = -0.7415311855993940;
        points[2] = -0.4058451513773970;
        points[3] = 0;
        points[4] = -points[2];
        points[5] = -points[1];
        points[6] = -points[0];
    }
    else {
        fprintf(stderr, "setGaussPoints: gauss_k don't know\n");
    }

    return points;
}

// gauss weights
vector<T> setGaussWeights(index gauss_k)
{
    vector<T> weights(gauss_1d_len(gauss_k), 0);
    if (gauss_k == 1) {
        weights[0] = 2;
    }
    else if (gauss_k == 2) {
        weights[0] = 1;
        weights[1] = weights[0];
    }
    else if (gauss_k == 3) {
        weights[0] = 5.0 / 9;
        weights[1] = 8.0 / 9;
        weights[2] = weights[0];
    }
    else if (gauss_k == 5) {
        weights[0] = 0.2369268850561891;
        weights[1] = 0.4786286704993665;
        weights[2] = 0.5688888888888889;
        weights[3] = weights[1];
        weights[4] = weights[0];
    }
    else if (gauss_k == 7) {
        weights[0] = 0.1294849661688690;
        weights[1] = 0.2797053914892760;
        weights[2] = 0.3818300505051180;
        weights[3] = 0.4179591836734690;
        weights[4] = weights[2];
        weights[5] = weights[1];
        weights[6] = weights[0];
    }
    else {
        fprintf(stderr, "setGaussWeights: gauss_k don't know\n");
    }


    return weights;
}
