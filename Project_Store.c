//Programme to conduct operations of a store in C
/*Rajarshi Sur*/
#include<stdio.h>
#include<string.h>
typedef struct items{                                    
int itemno,stock;                                              
char itemname[25];
char itemcat[25];
}item;
void itembuy(item *b,int x);
void itemavail(item *c,int y);
int main(){
    int n,num,l=1,o,b,d;
printf("Enter the number of items in your shop\n");
scanf("%d",&n);
item a[n];
for(int i=0;i<n;i++){
    printf("Enter the name of the item: ");
    scanf("%s",a[i].itemname);
    printf("Enter the number of the item: ");
    scanf("%d",&a[i].itemno);
    printf("Enter the category of the item: ");
    scanf("%s",a[i].itemcat);
    printf("Enter the available stock of the item: ");
    scanf("%d",&a[i].stock);
}
//dowhile loop for the menu option
do{
printf("menu\n1.itembuy \n2.check the availability\n3.exit\n");
printf("Enter your choice\n");
scanf("%d",&num);

switch(num){
case 1:
    printf("Enter the itemnumber of the item you want to buy\n");
    scanf("%d",&b);
for(int i=0;i<n;i++){
itembuy(&a[i],b);
}
break;

case 2:
    printf("Enter the itemnumber of the item whose availability you want to check\n");
    scanf("%d",&d);
for(int i=0;i<n;i++){
itemavail(&a[i],d);
}
break;

case 3:
printf("If you want to exit enter 1 and if not enter 0\n");
scanf("%d",&o);
if(o==1){
--l;
}
break;

default:
printf("Invalid input\n");
}
}while(l>0);
return 0;
}
//functions to run the menu
void itembuy(item *b,int x){
    int j;
if(b->itemno==x && b->stock != 0)
{
    printf("Enter the number of the items you want to buy\n");
    scanf("%d",&j);
    printf("%d",j);
    b->stock = b->stock-j;
}
else if(b->stock==0)
{
    printf("The item you wanted to buy is out of the stock\n");
}
}
void itemavail(item *c,int y){
if(c->itemno==y && c->stock!=0){
printf("The item you wanted to buy in stock and its availability is %d\n",c->stock);
}
}
