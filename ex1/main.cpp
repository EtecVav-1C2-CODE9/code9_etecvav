#include <iostream>
using namespace std;

bool impar(int x){ return x % 2 != 0; }

long long somaImparesAte(int n){
    long long s = 0;
    if(n > 0){
        for(int i = 1; i <= n; ++i) if(impar(i)) s += i;
    }else if(n < 0){
        for(int i = -1; i >= n; --i) if(impar(i)) s += i;
    }
    return s;
}

int main(){
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "Soma dos impares ate " << n << ": " << somaImparesAte(n) << "\n";
    return 0;
}
