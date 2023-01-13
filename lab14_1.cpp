#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[]){
    double sum = 0, x, max = a[0], min = a[0], g = 1, h = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        x += pow(a[i],2);
        g *= a[i];
        h += 1/a[i]; 
    }
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i]; 
        } 
    }    
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i]; 
        }
    }   
    b[0] = sum/n;
    b[1] = sqrt((x/n) - pow(sum/n,2));
    b[2] = pow(g,1.0/n);
    b[3] = n/h;
    b[4] = max;
    b[5] = min;
}