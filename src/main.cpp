#include "../include/3dVector.h"
#include "../include/netHeatFlow.h"

int main() {
    Vector3 q(2.0, 3.0, 1.0);
    Vector3 n(0.0, 1.0, 0.0);
    double dA = 5.0;

    computeHeatFlow(q, n, dA);

    return 0;
}