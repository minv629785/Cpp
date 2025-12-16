#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10] = {6,9,4,8,7,1,3,5,2,0};
    for(int i=0;i<10-1;i++){
        for(int k=0;k<10-1-i;k++){
            if(a[k]>a[k+1]){
                swap(a[k],a[k+1]);
            }
        }
    }
    for(int i=0;i<10;i++){
        cout << a[i] << " ";
    }
        
}