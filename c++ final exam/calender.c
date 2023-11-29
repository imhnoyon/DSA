#include<stdio.h>
int getFirstDayOfTheYear(int year)
{
    int day=(year*365 + ((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
    return day;
}
int main()
{
   char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"} ;
     int days_in_months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,total_days,weekday=0,space=0,year;
    printf("Enter your choose year:\n");
    scanf("%d",&year);
    printf("\n***************Welcome to %d year**************",year);
    if((year % 4==0 && year % 100 !=0)|| (year % 400 == 0))
    {
        days_in_months[1]=29;
    }
    // get the first day of the year
    weekday=getFirstDayOfTheYear(year);

     for (i=0;i<12;i++)
    {
        printf("\n---------------------%s---------------------\n",months[i]);
         printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
         for(space=1;space<=weekday;space++)
         {
            printf("     ");
         }
        total_days=days_in_months[i];
        for(j=1;j<= total_days;j++)
        {
            printf("%4d ",j);
            weekday++;
            if(weekday>6)
            {
                weekday=0;
                printf("\n");
            }
        }

    }

return 0;
}