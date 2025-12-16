#include<bits/stdc++.h>
using namespace std;
int main(){
    int F[40] = {0,1};
    for(int i = 2;i<40;i++){
        F[i] = F[i-1] + F[i-2];
    }
    int rounds;
    cin >> rounds;
    for(rounds;rounds!=0;rounds--){
        int NUM;
        bool on=false;
        char c[40] = "0";
        cin >> NUM;
        int a = NUM;
        cout << NUM << " = ";
        for(int i=39; i>=2;i--){
            if(a >= F[i]){
                on = true;
                cout << "1";
                a-=F[i];
                i--;
            }
            while(on){
                if(i>2){
                    cout << "0";
                break;
                }
                else{
                    cout << " (fib)"<<endl;
                    break;
                }
            }
        }
    }
}