//
// Created by wy on 8/13/21.
//
#include <iostream>
using namespace std;
int main_cf_1511A(){
    int t = 0;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int a = 0;
        int b = 0;
        int c = 0;
        int arr[n];
        for(int j=0; j<n; j++){;
            cin >> arr[j];
            if(arr[j] == 1){
                a++;
            }
            else if(arr[j] == 2){
                b++;
            }
            else if(arr[j] == 3){
                c++;
            }
        }
        cout << a + c <<endl;
    }
}

