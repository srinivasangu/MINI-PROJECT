
#include<stdio.h>
int main()
{
    int seats;
    printf("Available Bus Seats- 72\n");
    printf("Enter the number of seats to be booked-");
    scanf("%d",&seats);
    printf("Seats to be booked-%d\n",seats);
    if(72>=seats){
        printf("Class available\n");
        printf("1)economy\n2)business class\n3)premium\n");
        int class;
        printf("Select class-");
        scanf("%d",&class);
        int price;
        if(class==1){
            price=2500;
        }
        else if(class==2){
            price=4500;
        }
        else if(class==3){
            price=7500;
        }
        char name[72],startpt[72],dest[72];
        int age;
        printf("Enter your name-");
        scanf("%s",&name);
        printf("Enter your age-");
        scanf("%d",&age);
        printf("Enter your Start point-");
        scanf("%s",&startpt);
        printf("Enter your destination-");
        scanf("%s",&dest);
        printf("RECPIT\nName-%s\nage-%d\nstart point-%s\ndestination-%s\nPrice-%d\nSeats booked",name,age,startpt,dest,price*seats);
    }
    else
    printf("Seats full");
    return 0;
}