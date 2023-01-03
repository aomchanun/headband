#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<string>
#include<fstream>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sumsqr = 0;
    float mean,stde,input,inputsqr;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline))
    {
        input = atof(textline.c_str());
        sum += input;
        inputsqr = pow(input,2);
        sumsqr += inputsqr;
        count++;
    }
    mean = sum/count;
    stde = sqrt((sumsqr/count)-pow(mean,2));


    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << stde;
}