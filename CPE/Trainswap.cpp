#include<bits/stdc++.h>
using namespace std;

int main(){

    int rounds;
    cin >> rounds;
    for(rounds;rounds!=0;rounds--){
        int nums,i,count=0;
        cin >> nums;
        int c[nums];
        for(int n=0;n!=nums;n++){
            cin >> c[n];
        }
        for(int i=0;i<nums-1;i++){
            for(int k=0;k<nums-1-i;k++){
                if(c[k]>c[k+1]){
                    swap(c[k],c[k+1]);
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes " << count <<" swaps."<<endl;
    }

    cout << endl;

}
