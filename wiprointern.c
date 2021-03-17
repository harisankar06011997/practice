#include <stdio.h>
void main()
{
    int x,count=0,numofdig,ce=0,co=0,a;
    scanf("%d",&x);
    int dup=x;
    while(dup!=0)
    {
        dup=dup/10;
        count++;
    }
    numofdig=count;
    count=0;
    for(a=numofdig;a>0;a--){
        if(a%2==0){
            if((x%10)%2==0){
                ce++;
            }
        }
        if(a%2!=0){
            if((x%10)%2!=0){
                co++;
            }
        }
        x=x/10;
    }
    printf("%d",ce+co);

}
