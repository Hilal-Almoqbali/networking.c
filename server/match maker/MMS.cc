#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

int main (void)
{
    // pointer demo to FILE
    FILE* myport;
    int display;
 
    // Creates a file "demo_file"
    // with file access as read mode
    myport = fopen("myport.txt", "r");
    char array[20];
    int results = fputs(array, myport);
    if (results == EOF) 
    {
    // Failed to write do error code here.
    }
    fclose(myport);
    printf("%s",array);}
/*
    //  Socket to talk to clients
    void *context = zmq_ctx_new ();
    void *responder = zmq_socket (context, ZMQ_REP);
    int rc = zmq_bind (responder, "");
    assert (rc == 0);

    while (1) {
        char buffer [10];
        zmq_recv (responder, buffer, 10, 0);
        printf ("Received Hello\n");
        sleep (1);          //  Do some 'work'
        zmq_send (responder, "World", 5, 0);
    }
    return 0;
}


 

 
    // pointer demo to FILE
    FILE* demo;
    int display;
 
    // Creates a file "demo_file"
    // with file access as read mode
    demo = fopen("demo_file.txt", "r");
    */