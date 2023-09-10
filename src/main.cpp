#include <iostream>
#include <iomanip>
#include "main.h"

int main() {
    // Calculating pi using the Gregory-Leibniz series
    float expr = (4/current) - (4/(current+2));
    for(double x = 0; x < maxtries; x++) {
        
        current += 4;
        expr += (4/current) - (4/(current+2));
    }
    std::cout << "C:" << current << " -> " << std::fixed << std::setprecision(precision) << expr << std::endl;
}