#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main (){
    int i = 0;
    float sum = 0, avg, sdsum = 0;
    string text;
    ifstream source("score.txt");
    while(getline(source, text)){
        sum += atof(text.c_str());
        sdsum += pow(atof(text.c_str()), 2);
        i++;
    }
    avg = sum/i;

    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = " << avg << "\n";
    cout << "Standard deviation = " << (sqrt((sdsum/i) - pow(avg, 2)));
}