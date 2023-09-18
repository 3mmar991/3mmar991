//QUEUE.h
#define QUEUE_SIZE  5 //choose the size of ur queue.
#define NULL_P   0

typedef enum
{
    QUEUE_empty=0,
    QUEUE_full,
    QUEUE_ok

} QUEUE_Status;

QUEUE_Status in_Q(int data);
QUEUE_Status de_Q(int*num);
