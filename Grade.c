#include<stdio.h>
int main(){
 char math[10],eng[10],kisw[10],bio[10],phy[10],geog[10],chem[10],agri[10];
 char sum[20],average[10];
 printf("Enter marks for mathematics\n");
 fgets(math,sizeof(math),stdin);

  printf("Enter marks for English\n");
 fgets(eng,sizeof(eng),stdin);

  printf("Enter marks for Kiswahili\n");
fgets(kisw,sizeof(kisw),stdin);

  printf("Enter marks for Biology\n");
 fgets(bio,sizeof(bio),stdin);

  printf("Enter marks for  Physics\n");
 fgets(phy,sizeof(phy),stdin);

  printf("Enter marks for Chemistry\n");
fgets(chem,sizeof(chem),stdin);

  printf("Enter marks for Geography\n");
 fgets(geog,sizeof(geog),stdin);

 printf("Enter marks for Agriculture\n");
 fgets(agri,sizeof(agri),stdin);


 sum=(math+eng+kisw+bio+phy+chem+geog+agri);
average=((sum)/8);
printf("The sum is \n");
puts(sum);
printf("The average is \n");
puts(average);
if(average>=0&&average<=39){
    printf("Grade E");
}
if(average>=40&&average<=49){
    printf("Grade D");
}
if(average>=50&&average<=59){
    printf("Grade C");
}
if(average>=60&&average<=69){
    printf("Grade B");
}
if(average>=70&&average<=79){
    printf("Grade A");
}

}
