#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nMENU CARD \nSelect your drink \n1.Paneer Tikka \n2.Garlic Naan \n3.dal Makhni \n4.Spring Roll \n5.Chola Kulcha\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Paneer Tikka.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=5;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Garlic Naan.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected dal Makhni.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected Spring Roll.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected Chola Kulcha.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}