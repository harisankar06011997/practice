#include <stdio.h>
void main()
{
    int n,cnt1=0,cnt2=0,i=0;
    printf("enter number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        if(i%2==0)
        {
            if((n%10)%2==0)
                cnt1++;
            else
                cnt2++;
        }
        else
        {
            if((n%10)%2!=0)
                cnt1++;
            else
                cnt2++;
        }
        i++;
        n=n/10;
    }
    if(i%2==0)
    {
        printf("%d",cnt1);
    }else
    {
        printf("%d",cnt2);
    }

}
