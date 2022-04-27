#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nMENU CARD \nSelect your drink \n1.Chicken masala \n2.Garlic Bread\n3.dal Makhni \n4.Wrap \n5.Butter Chicken\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Chicken masala.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=5;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Garlic Bread.\n Enter the quantity :");
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
    printf("\nYou have selected Wrap.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected Butter Chicken.\n Enter the quantity :");
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
