#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool im[][M],int s,int c,int l){
    int x,y;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            x = pow(i-c,2);
            y = pow(j-l,2);
            if(sqrt(x+y) <= s-1) im[i][j] = 1;
        }
    }
}

void showImage(const bool im[][M]){
    cout  << "------------------------------------------------------------------------\n";
    for(int i = 0; i < N; i++){
        cout << "|";
        for(int j = 0; j < M; j++){
            if(im[i][j] == 1) cout << "*";
            else cout << " ";
        }   
        cout << "|\n";
    }
    cout  << "------------------------------------------------------------------------\n";
}
