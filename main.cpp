#include <iostream>
#include <math.h>
using namespace std;

int main() {
    enum Cifre{I=1, V=5, X=10, L=50, C=100, D=500, M=1000};
    int N;
    int N_arr[7];

    cout<<"Dati N: ";   cin>>N;
    int i=0;
    N_arr[i]=N%10;
    i++;
    while(N_arr[i]<N){
        int s=pow(10,i+1);
        N_arr[i]=floor(N%s);
        i++;
    }

    for(i=0;i<7;i++){
        cout<<" "<<N_arr[i];
    }
}