#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,q,j,temp;
    cin>>n>>k>>q;
    int A[n];
    int Q[q];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<q;i++){
        cin>>Q[i];
       }
    for(int i=0;i<k;i++){
        temp=A[n-1];
        for(int j=n-1;j>0;j--){
            A[j]=A[j-1];
        }
        A[0]=temp;
    }

    for(int i=0;i<q;i++){
        cout<<A[Q[q]]<<endl;
       }
    return 0;
}
