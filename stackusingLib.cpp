#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string c[10]="harisanka";
    stack<char> s;


    for(int i=0;i<10;i++)
   {
       s.push(&c[i]);
   }
   while(!s.empty())
   {
       c[i]=s.top();
       s.pop();
   }

   cout<<c;


return 0;
}
