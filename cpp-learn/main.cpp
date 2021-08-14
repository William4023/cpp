//
// Created by wy on 8/13/21.
//
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cin >> n;
    int even = 0;
    int odd = 0;
    int arr[n];
    for(int i = 0; i<n ;i++){
        cin >> arr[i];
        if(arr[i]%2 == 0){
            even++;
        }
        else if(arr[i]%2 != 0){
            odd++;
        }
        else{
            return 0;
        }
    }
    cout << even + odd <<endl;
        
}