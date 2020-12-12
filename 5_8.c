#include<stdio.h>
int main(){
    int hours,minutes,eight_am,nine_43_am,eleven_19_am,twelve_47_pm,two_pm,three_45_pm,seven_pm,nine_45_pm,midnight;
    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hours, &minutes);

    if (minutes>60){
        printf("Invalid time.\n");
    }else{

    
    //converting all times into minutes
    minutes+=hours*60;
    eight_am=8*60;
    nine_43_am=9*60+43;
    eleven_19_am=11*60+19;
    twelve_47_pm=12*60+47;
    two_pm=14*60;
    three_45_pm=15*60+45;
    seven_pm =19*60;
    nine_45_pm=21*60+45;
    midnight=23*60+59;

    if(minutes>=24*60 || minutes<=0){
        printf("Invalid time.\n");
    }else{
        printf("Closest departure time is: ");
    }

    if(minutes<eight_am)
        printf("8:00 am, arriving at 10:15 am");
    
    if (minutes >= eight_am && minutes < nine_43_am) {
            if (nine_43_am - minutes < minutes - eight_am)
                printf("9:43 am, arriving at 11:52 am");
            else
                printf("8:00 am, arriving at 10:15 am");
        }

        if (minutes >= nine_43_am && minutes < eleven_19_am) {
            if (eleven_19_am - minutes < minutes - nine_43_am)
                printf("11:19 am, arriving at 1:30 pm");
            else
                printf("9:43 am, arriving at 11:52 am");
        }

        if (minutes >= eleven_19_am && minutes < twelve_47_pm) {
            if (twelve_47_pm - minutes < minutes - eleven_19_am)
                printf("12:47 pm, arriving at 3:00 pm");
            else
                printf("11:19 am, arriving at 1:30 pm");
        }

        if (minutes >= twelve_47_pm && minutes < two_pm) {
            if (two_pm - minutes < minutes - twelve_47_pm)
                printf("2:00 pm, arriving at 4:08 pm");
            else
                printf("12:47 pm, arriving at 3:00 pm");
        }

        if (minutes >= two_pm && minutes < three_45_pm) {
            if (three_45_pm - minutes < minutes - two_pm)
                printf("3:45 pm, arriving at 5:55 pm");
            else
                printf("2:00 pm, arriving at 4:08 pm");
        }

        if (minutes >= three_45_pm && minutes < seven_pm) {
            if (seven_pm - minutes < minutes - three_45_pm)
                printf("7:00 pm, arriving at 9:20 pm");
            else
                printf("3:45 pm, arriving at 5:55 pm");
        }

        if (minutes >= seven_pm && minutes < nine_45_pm) {
            if (nine_45_pm - minutes < minutes - seven_pm)
                printf("9:45 pm, arriving at 11:58 pm");
            else
                printf("7:00 pm, arriving at 9:20 pm");
        }

        if (minutes >= nine_45_pm && minutes <= midnight)
            printf("9:45 pm, arriving 11:58 pm");


    printf("\n");
    }
    return 0;

}