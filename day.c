//to print true if the given day is a working day else false
#include <stdio.h>

int main(void) {
	// your code goes here

    enum Days {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    enum Days tdy;
    int x;
    printf("please enter the day of the week(0 to 6)\n");
    printf("0.sunday\n1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n6.saturday\n");
    scanf("%d",&x);
    tdy=x;
    if(tdy==Sunday || tdy==Saturday)
        printf("false");
    else
        printf("true");
    return 0;
}

