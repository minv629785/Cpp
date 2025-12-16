#include<bits/stdc++.h>
using namespace std;


int main(){

    int a,b;
    while(cin >> a >> b){
        int A=a,B=b;
        if(A>B){
            swap(A,B);
        }
        int max=0;
        for(int k=A;k<=B;k++){
            int n=k;
            int i=1;
            while(n!=1){
                if (n%2!=0)
                    n=n*3+1;
                else   
                    n/=2;  
                i++;
            }
            if(i>max)
                max = i;  
    }
        cout <<a<<" "<<b<<" "<< max<<endl;
    }


}