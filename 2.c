#include<stdio.h>
int main(){

int number;
printf("Enter a number"\n);
scanf("%d",&number);
if(number%2==0){
printf("%d is even number",number);
}
else{
    printf("number is odd");
}
return 0;
}
