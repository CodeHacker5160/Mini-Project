#include<stdio.h>
int main(){
int choice,p,q;
int sum,diff,mult,div,mod;
printf("1.Sum\n");
printf("2.Difference\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Modulus\n");
printf("Enter a Choice:\n");
scanf("%d %d %d",&choice,&p,&q);
if (choice==1){
sum=p+q;
printf("The sum is:%d\n",sum);}
else if(choice==2){
diff=p-q;
printf("The diiference is:%d\n",diff);}
else if(choice==3){
mult=p*q;
printf("The multiplication is:%d\n",mult);}
else if(choice==4){
div=p/q;
printf("The division is:%d\n",div);}
else if(choice==5){
mod=p%q;
printf("The modulus is:%d\n",mod);}
else{
printf("You entered wrong choice");}
return 0;}



