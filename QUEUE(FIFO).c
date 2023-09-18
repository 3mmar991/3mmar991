//QUEUE.C
#include "queue.h"
static int queue[QUEUE_SIZE]= {0};
static int in_p=0;
static int Q_p=0;


QUEUE_Status in_Q(int data)
{
    QUEUE_Status status;
    if(in_p==Q_p)
    {
        Q_p=0 ;
        in_p=0;
    }
    if(in_p>QUEUE_SIZE-1)
    {
        status= QUEUE_full;
    }
    else
    {
        queue[in_p]=data;
        in_p++;
        status= QUEUE_ok;
    }
    return status;
}

QUEUE_Status de_Q(int*num)
{
    QUEUE_Status status;
    if(num != NULL_P)
    {
        if(in_p==Q_p)
        {
            Q_p=0 ;
            in_p=0;
            status= QUEUE_empty;
        }
        else
        {

            *num=queue[Q_p];
            Q_p++;
            status= QUEUE_ok;
        }
    }
    return status;
}
