#include <stdio.h>



int main(){
    int n;
    int k,c=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int a_i = 0;a_i < n-1;a_i++){
       for(int a_j = a_i+1;a_j < n;a_j++){
       if((a[a_i]+a[a_j]) % k==0)
           c++;
    }
    }
    return 0;
}
