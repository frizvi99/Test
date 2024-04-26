#include<bits/stdc++h>


int main(){
    cout<<"Hello "; //intentionally deleted world..
    calculateFactorial(10);
    //Dont change...
}

int calculateFactorial(int n){
    int result =1 ;
    for(int i=1 ; i<=n ; i++){
        result *=i;
    }

    return result;
}

int sum(int a, int b){
    return a+b*2;
}
frizvi99/Git-Assignment-Individual-1-BS1560