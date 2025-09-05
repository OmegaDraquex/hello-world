#include <stdio.h>
#include <string.h>

int main(void) {
   char inputMonth[50];
   int inputDay;
   int month = 0;
   char January[]= {"January"};
   char February[]= {"February"};
   char March[]= {"March"};
   char April[]= {"April"};
   char May[]= {"May"};
   char June[]= {"June"};
   char July[]= {"July"};
   char August[]= {"August"};
   char September[]= {"September"};
   char October[]= {"October"};
   char November[]= {"November"};
   char December[]= {"December"};
   scanf("%s", inputMonth); 
   scanf("%d", &inputDay); 
   
   /* Type your code here. */
    if(strcmp(inputMonth,January) != 0 & strcmp(inputMonth,February) != 0 & strcmp(inputMonth,March) != 0 & strcmp(inputMonth,April) != 0 & strcmp(inputMonth,May) != 0 & strcmp(inputMonth,June) != 0 & strcmp(inputMonth,July) != 0 & strcmp(inputMonth,August) != 0 & strcmp(inputMonth,September) != 0 & strcmp(inputMonth,October) != 0 & strcmp(inputMonth,November) != 0 & strcmp(inputMonth,December) != 0 || inputDay < 1 || inputDay > 31){
        printf("Invalid\n");
        return 0;
    } if (strcmp(inputMonth,January) == 0){
        month = 1;
    } else if (strcmp(inputMonth,February) == 0){
        month = 2;
    } else if (strcmp(inputMonth,March) == 0){
        month = 3;
    } else if (strcmp(inputMonth,April) == 0){
        month = 4;
    } else if (strcmp(inputMonth,May) == 0){
        month = 5;
    } else if (strcmp(inputMonth,June) == 0){
        month = 6;
    } else if (strcmp(inputMonth,July) == 0){
        month = 7;
    } else if (strcmp(inputMonth,August) == 0){
        month = 8;
    } else if (strcmp(inputMonth,September) == 0){
        month = 9;
    } else if (strcmp(inputMonth,October) == 0){
        month = 10;
    } else if (strcmp(inputMonth,November) == 0){
        month = 11;
    } else if (strcmp(inputMonth,December) == 0){
        month = 12;
    } if (month ==3  & inputDay >= 20 & inputDay <=31 || month ==4  & inputDay >0 & inputDay <= 31 || month ==5  & inputDay >0 & inputDay <= 30 || month ==6  & inputDay <=20 & inputDay >0){
        printf("Spring\n");
    } else if (month ==6  & inputDay >= 21 & inputDay <=30 || month ==7  & inputDay >0 & inputDay <= 31 || month ==8  & inputDay >0 & inputDay <= 31 || month ==9  & inputDay <=21 & inputDay >30){
        printf("Summer\n");
    } else if (month ==9  & inputDay >= 22 & inputDay <=30 || month == 10 & inputDay >0 & inputDay <= 31 || month ==11  & inputDay >0 & inputDay <= 30 || month ==12  & inputDay <=20 & inputDay >0){
        printf("Autumn\n");
    } else if (month ==12  & inputDay >= 21 & inputDay <=31 || month == 1 & inputDay >0 & inputDay <= 31 || month ==2  & inputDay >0 & inputDay <= 29 || month ==3  & inputDay <=19 & inputDay >0){
        printf("Winter\n");
    } else {printf("Invalid\n");}
    
    
   return 0;
}
