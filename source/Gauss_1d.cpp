#include "Gauss.h"

// gauss points
vector<T> setGaussPoints(index gauss_k)
{
    vector<T> points(gauss_k, 0);
    if (gauss_k == 3) {
        points[0] = -sqrt(0.6);
        points[1] = 0;
    }
    else if (gauss_k == 5) {
        points[0] = -0.9061798459386640;
        points[1] = -0.5384693101056831;
        points[2] = 0;
    }
    else if (gauss_k == 7) {
        points[0] = -0.9491079123427580;
        points[1] = -0.7415311855993940;
        points[2] = -0.4058451513773970;
        points[3] = 0;
    }
    else {
        fprintf(stderr, "setGaussPoints:gauss_k don't know\n");
        points[0] = -0.9491079123427580;
        points[1] = -0.7415311855993940;
        points[2] = -0.4058451513773970;
        points[3] = 0;
    }
    for (index i = gauss_k / 2; i < gauss_k; i++) {
        points[i] = -points[gauss_k - 1 - i];
    }

    return points;
}

// gauss weights
vector<T> setGaussWeights(index gauss_k)
{
    vector<T> weights(gauss_k, 0);
    if (gauss_k == 3) {
        weights[0] = 5.0 / 9;
        weights[1] = 8.0 / 9;
    }
    else if (gauss_k == 5) {
        weights[0] = 0.2369268850561891;
        weights[1] = 0.4786286704993665;
        weights[2] = 0.5688888888888889;
    }
    else if (gauss_k == 7) {
        weights[0] = 0.1294849661688690;
        weights[1] = 0.2797053914892760;
        weights[2] = 0.3818300505051180;
        weights[3] = 0.4179591836734690;
    }
    else {
        fprintf(stderr, "setGaussWeights:gauss_k don't know\n");
        weights[0] = 0.1294849661688690;
        weights[1] = 0.2797053914892760;
        weights[2] = 0.3818300505051180;
        weights[3] = 0.4179591836734690;
    }
    for (index i = gauss_k / 2; i < gauss_k; i++) {
        weights[i] = weights[gauss_k - 1 - i];
    }

    return weights;
}
