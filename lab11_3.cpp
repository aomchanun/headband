#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<string>
#include<fstream>

using namespace std;

int main(){
    int count = 0;
    float sum = 0, sumsqr = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        sumsqr += pow(atof(textline.c_str()),2);
        count++;}

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((sumsqr/count)-pow(sum/count,2));
}