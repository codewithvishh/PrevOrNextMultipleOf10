//write a c program to find next multiple of 10 of a given two digit number only.

/*#include<stdio.h>
int main()
{
    int n=26;//declaration
    int V=(n/10)*10;//initialization
         //26/10*10=2*10=20
    printf("%d",V);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int v=(n%10/5+n/10)*10;
    printf("%d",v);
}