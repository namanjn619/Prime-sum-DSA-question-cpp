#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }

}
int main(){
    int A;
    cin>>A;
    vector<int> result;
    if(A%2==0 and A>2){
        for(int i=2; i<=A/2; i++){
            if(isprime(i) and isprime(A-1)){
                result.push_back(i);
                result.push_back(A-i);
                break;
            }
        }
    }
    for(auto value : result){
        cout<<value;
    }
}