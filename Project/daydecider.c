#include <stdio.h>

int main(){

int d,m,y,g,r,dy,dm,td,wd;

printf(" Enter date in dd mm yyyy format \n");
scanf("%d%d%d",&d,&m,&y);

g = y/4;
r = y%4;
dy = 1461*g + (4-r)*365; // there are 1461 days in 4 years with the last year being leap

switch (m)
{
case 1:
    dm = d;
    break;

case 2:
    dm = d+31;
    break;

case 3:
    if(r=0)
    dm = d+31+29;
    else
    dm = d+31+28;
    break;

case 4:
     if(r=0)
    dm = d+31+29+31;
    else
    dm = d+31+28+31;
    break;

case 5:
     if(r=0)
    dm = d+31+29+31+30;
    else
    dm = d+31+28+31+30;
    break;

case 6:
     if(r=0)
    dm = d+31+29+31+30+31;
    else
    dm = d+31+28+31+30+31;
    break;

case 7:
     if(r=0)
    dm = d+31+29+31+30+31+30;
    else
    dm = d+31+28+31+30+31+30;
    break;
case 8:
     if(r=0)
    dm = d+31+29+31+30+31+30+31;
    else
    dm = d+31+28+31+30+31+30+31;
    break;

case 9:
     if(r=0)
    dm = d+31+29+31+30+31+30+31+31;
    else
    dm = d+31+28+31+30+31+30+31+31;
    break;

case 10:
     if(r=0)
    dm = d+31+29+31+30+31+30+31+30+31;
    else
    dm = d+31+28+31+30+31+30+31+30+31;
    break;
case 11:
     if(r=0)
    dm = d+31+29+31+30+31+30+31+30+31+31;
    else
    dm = d+31+28+31+30+31+30+31+30+31+31;
case 12:
     if(r=0)
    dm = d+31+29+31+30+31+30+31+30+31+31+30;
    else
    dm = d+31+28+31+30+31+30+31+30+31+31+31;
    break;
default:
    break;
}
td = dy+dm;
wd = td%7;

switch (wd)
{
case 1:
    printf("Saturday");
    break;
case 2:
    printf("Sunday");
    break;
case 3:
    printf("Monday");
    break;
case 4:
    printf("Tuesday");
    break;
case 5:
    printf("Wednesday");

    break;
case 6:
    printf("Thursday");
    break;
case 0:
    printf("Friday");
    break;

default:
    break;
}

}