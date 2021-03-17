#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=0;i<(n+1)/2;i++){
            for(int j=1;j<n;j++)
        cout<<2*i*n+j<<"*";
    cout<<2*i*n+n<<endl;
    }
    for(int i=0;i<n/2;i++){
            for(int j=1;j<n;j++)
        cout<<(2*(n/2)-(2*i+1))*n+j<<"*";
        cout<<(2*(n/2)-(2*i+1))*n+n<<endl;
    }
return 0;
}
