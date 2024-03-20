#include <iostream>


double calculateUncertainty(double Hmuszer, double Hoszto) {
    return Hmuszer + Hoszto;
}

int main() {
   
    double Hmuszer = 0.02; 
    double Hoszto = 0.0; 
    
    double tolerances[] = {0.001, 0.002, 0.005, 0.01, 0.02, 0.05};
    int numTolerances = sizeof(tolerances) / sizeof(tolerances[0]);

    for (int i = 0; i < numTolerances; i++) {
        Hoszto = tolerances[i];
        double totalUncertainty = calculateUncertainty(Hmuszer, Hoszto);
        std::cout << "Resistor tolerance: " << tolerances[i] * 100 << "%" << std::endl;
        std::cout << "Total uncertainty: " << totalUncertainty * 100 << "%" << std::endl;
        std::cout << std::endl;
    }

    return 0;
}