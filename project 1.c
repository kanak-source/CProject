#include <stdio.h>
#define chatcorner 10
int main() {
    char menu[chatcorner][60] = {
        "  kachori  ",
        "  samosha  ",
        "papadi chat",
        "pav - bhaji",
        "veg  maggie",
        " gol gappe ",
        "   burger  ",
        "  chowmin  ",
        "masala dosa",
        "aloo chat "
    };
    float prices[chatcorner] = {12.30, 15.25, 60.35, 70.10, 45.65, 35.45, 65.90, 30.55, 89.99, 32.09};
    float totalamount = 0.0;
    int orders = 0;
    int select;

printf("           welcome to chataka restaurant         \n");
printf("restaurant menu card:\n");
printf("s.no    item name        prices\n");
for( int i=0; i<chatcorner; i++){
    printf("%d.    %s   =    %f\n", i + 1, menu[i], prices[i]);
}
do{
printf("please select an item number for order(and press 0 if you want to end):");
scanf("%d", &select);
if ( select > 0 && select <= chatcorner) {
    totalamount += prices[select -1];
    orders++;
    printf("you ordered: %s:  %f\n", menu[select -1],prices[select -1]);
    }
    else if (select < 0 || select>chatcorner) {
    printf("select not exist\n please try again\n");
}
}
while(select != 0);
if (orders > 0){
    printf("    your total bill    \n");
    printf("totalamount: %f\n", totalamount);
}
else{ 
    printf("no item selected for ordered");
}
printf("thank you! for dinning with us\n   visit again   ");
return 0;
}