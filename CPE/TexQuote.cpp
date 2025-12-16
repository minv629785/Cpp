#include<bits/stdc++.h>
using namespace std;

int main(){
bool count=false;
char input[1000]="0";

while(cin.getline(input,1000)){
    for(int n=0;n<=1000;n++){
        if(input[n] == 0) break;
            if(input[n] == '"'){
                if (count){
                    cout << "''";
                    count = false;
                }
                else{ 
                    cout << "``";
                    count = true;
                }

            }
            else    
                cout << input[n];

    }
    cout << endl;
}   
}