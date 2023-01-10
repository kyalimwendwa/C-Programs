#include<stdio.h>
int main(){
int a,b,c;
printf("Enter a");
scanf("%d",&a);
printf("Enter b");
scanf("%d",&b);
printf("Enter c");
scanf("%d",&c);
if(a>b&&a>c)
{
    printf("%d is largest",a);
}
if(b>a&&b>c)
{
    printf("%d is largest",b);
}
if(c>b&&c>a)
{
    printf("%d is largest",c);
}
if(a==b&&a==c)
{
    printf("All are equal");
}

}
