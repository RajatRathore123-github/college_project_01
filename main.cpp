#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>
using namespace std;

void dA_to_A_expression(ofstream &fout, float lambda) {
    while(lambda != 0){
        float change_in_area_wrt_original = -1 * ((lambda * 0.5) / (0.018 * 5));
        cout << "dA/A" << "" << change_in_area_wrt_original << endl;
        fout << "dA/A" << "" << change_in_area_wrt_original << endl;
        lambda--;
    }
}

void dP_to_P_expression(ofstream &fout, float lambda) {
    while(lambda != 0){
        float change_in_pressure_to_original_pressure = -1 * (((1.4/2) * ((pow(0.02,2) * 4 * 0.003 * 0.5)) / 4.31) - ((1.4 * (pow(0.02,2) * (lambda * 0.5)) / (0.018 * 5))));
        cout << "dP/P" << "" << change_in_pressure_to_original_pressure << endl;
        fout << "dA/A" << "" << change_in_pressure_to_original_pressure << endl;
        lambda--;
    }
}

void dT_to_T_expression(ofstream &fout, float lambda) {
    while(lambda != 0){
        float change_in_temperature_to_original_temperature = -1 * ((5 * lambda * 0.5) / (0.7 * 0.018));
        cout << "dT/T" << "" << change_in_temperature_to_original_temperature << endl;
        fout << "dT/T" << "" << change_in_temperature_to_original_temperature << endl;
        lambda--;
    }
}

void dM_to_M_expression(ofstream &fout, float lambda) {
    while(lambda != 0){
        float change_in_mach_to_original = ((lambda * 0.5) / (0.018 * 5)) + (0.5 * (5/0.7) * (lambda / 0.018));
        cout << "dM/M" << "" << change_in_mach_to_original << endl;
        fout << "dT/T" << "" << change_in_mach_to_original << endl;
        lambda--;
    }
}
int main() {

    ofstream fout;
    fout.open("data.txt");
    float change_in_area_wrt_original;
    float change_in_pressure_to_original_pressure;
    float change_in_temperature_to_original_temperature;
    float change_in_mach_to_original;
    
    dA_to_A_expression(fout, -4.0);
    dP_to_P_expression(fout, -4.0);
    dT_to_T_expression(fout, -4.0);
    dM_to_M_expression(fout, -4.0);
    
    fout.close();
    
    return 0;
}