#include <iostream>

using namespace std;

int main() {
    double tomb[7]={0.001, 0.002, 0.005, 0.01, 0.02, 0.05};
    double elleneallas_elteres=0.02;
    int ellenalas=10;
    double kimeneti_feszultseg;
    double feszultseg_elteres;
    double feszultseg = 0;

    while(feszultseg <= 100) {
        kimeneti_feszultseg = feszultseg*(2000/(ellenalas+2000));
        feszultseg_elteres= 100-(kimeneti_feszultseg/feszultseg)*100;
        cout << "Kimeneti feszultseg: " << kimeneti_feszultseg << endl;
        cout << "Feszultseg elteres: " << feszultseg_elteres << "%" << endl;
        feszultseg++;
    }
   
    return 0;
}
