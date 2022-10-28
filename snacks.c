/*
Name: Sumit Subhash Jadhav
U89612131.
This program divides expenses done snacks during the trip of 10 friends.
*/
#include<stdio.h>
int main()
{
    int a,b;
    float c,d,e;
    /*
    a=selection
    b=number of boxes
    c=individual cost of each item
    d=sub total
    e=total cost per person
    */
    printf("Please select from the list:\n");
    printf("1. Energy bars -$3.99 /box\n");
    printf("2. Candy bars -$2.39 /box\n");
    printf("3. Chips -$4.79 /bag\n");
    printf("4. Pretzels -$2.99/bag\n");
    printf("5. Popcorns -$3.50 /bag\n");
    printf("6. Energy drinks -$4.99/half dozen\n");
    printf("Enter selection:");
    a = 1;
    while(a!=0)
    {
        printf("Enter selection:");
        scanf("%d",&a);

           switch(a)
        {
            case 1:  //cost of energy bars
                printf("Enter the number of boxes:");
                scanf("%d",&b);
                c=3.99*b;
                d += c;
                break;
            case 2:  //cost of candy bars
                printf("Enter the number of boxes:");
                scanf("%d",&b);
                c=2.39*b;
                d =d+c;
                break;
            case 3:   //cost of chips
                printf("Enter the number of boxes:");
                scanf("%d",&b);
                c=4.79*b;
                d += c;
                break;
            case 4:   //cost of Pretzels
                printf("Enter the number of boxes:");
                scanf("%d",&b);
                c = 2.99*b;
                d += c;
                break;
            case 5:   //cost of Popcorns
                printf("Enter the number of boxes:");
                scanf("%d",&b);
                c = 3.50*b;
                d += c;
                break;
            case 6:   //cost of energy drinks

                printf("Enter number of drinks as multiples of six (6, 12, 18...):");    //come only in pack of 6
                scanf("%d",&b);

                c=4.99*b/6;
                d += c;
                break;
        }
        if(a<0 || a>6)    //condition for invalid choice of selection
        {
           printf("Invalid selection, select from 1 to 6, enter 0 to stop selection\n");
        }
    }
    e = d / 10;
    printf("Cost per person($): %.2f", e);   //formatting to give out answer accurate till 2 decimal places
    return 0;
}
