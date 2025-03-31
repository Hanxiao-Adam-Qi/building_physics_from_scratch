#include <iostream>
#include "../include/netHeatFlow.h"

void computeHeatFlow(const Vector3& q, const Vector3& n, double dA) {
    double magnitude_q = q.magnitude();
    double dQ = q.dot(n) * dA;

    std::cout << "Heat flow vector magnitude: " << magnitude_q << " W/m²\n";
    std::cout << "Net heat flow through surface: " << dQ << " W\n";
}
