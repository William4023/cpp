#include <iostream>
using namespace std;

int main_3(){
    int N; cin >> N;
    for (int i = 2; i <= N; i++){
        bool isPrime = true;
        for (int j = 2; j <= i-1; j++){
            if (i%j == 0){
                isPrime = false;
            }
        }
        if (isPrime == true){
            cout << i << " ";
        }
    }
}