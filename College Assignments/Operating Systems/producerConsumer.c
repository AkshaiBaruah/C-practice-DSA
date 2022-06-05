#include <stdio.h>
#include <stdlib.h>
 

int mutex = 1;            //semaphore
int full = 0;
int empty = 5, x = 0;     //let's say buffer of size 5

void producer()
{
    //Enter
    --mutex;
    ++full;
    --empty;
    x++;
    printf("\nProducer produces " "item %d",           x);
    //exit
    ++mutex;
}
 
// Function to consume an item and
// remove it from buffer
void consumer()
{
   
    --mutex;
    --full; 
    ++empty;
    printf("\nConsumer consumes ""item %d",x);
    x--;
    ++mutex;
}
 
// Driver Code
int main()
{
    int n, i;
    X :
    printf("\n1.Produce "
           "\n2.Consume "
           "\n3.Exit");
 


 
    printf("\nEnter your choice  : ");
    scanf("%d", &n);
    switch (n) {
    case 1:

        if ((mutex == 1)
            && (empty != 0)) {
            producer();
        }
        else {
            printf("Buffer is full!");
        }
        
        goto X;

    case 2:

        // If mutex is 1 and full
        // possible to consume
        if ((mutex == 1)
            && (full != 0)) {
            consumer();
        }

        // Otherwise, print Buffer
        // is empty
        else {
            printf("Buffer is empty!");
        }
        goto X;

    // Exit Condition
    case 3:
        exit(0);
        break;
    }

    return 0;
}

