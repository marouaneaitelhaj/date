#include <stdio.h>
int main(){
    start:
    printf("\n************************\nWHAT IS TODAY\n************************\n");
    int day, month, year;
    printf("DAY(number): ");
    scanf("%d", &day);
    switch(day){
case 0:
    printf("\nAre you kidding me\nThe day must be  1 - 31\n");
    break;
    default:

    if(day > 31){
        printf("\nAre you kidding me\nThe day must be  1 - 31\n");
    } else{
    printf("MONTH(number): ");
    scanf("%d", &month);
    switch(month){
case 0:
    printf("\nAre you kidding me\nThe month must be  1 - 12\n");
    break;
    default:

    if(month > 12){
        printf("\nAre you kidding me\nThe month must be  1 - 12\n");
    } else{
    printf("YEAR(number): ");
    scanf("%d", &year);
    if (year < 2022){
        printf("\nAre you kidding me\nThe year must be more than 2022\n");
    } else{
    printf("Saw Today is %d ", day);
    switch(month){
    case 1:
        printf("January");
    break;
    case 2:
        printf("February");
    break;
    case 3:
        printf("March");
    break;
    case 4:
        printf("April");
    break;
    case 5:
        printf("May");
    break;
    case 6:
        printf("June");
    break;
    case 7:
        printf("July");
    break;
    case 8:
        printf("August");
    break;
    case 9:
        printf("September");
    break;
    case 10:
        printf("October");
    break;
    case 11:
        printf("November");
    break;
    case 12:
        printf("December");
    break;
    }
    printf(" %d ", year);
    }}}}}
    goto start;
    return 0;
}
