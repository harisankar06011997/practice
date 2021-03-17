#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,temp,i,j;
      long res;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        res=1;
        for(j=0;j<n-1;j++){
            cin>>temp;
            res=res*temp;
        }
        cout<<res%1234567<<endl;
    }
    return 0;
}
