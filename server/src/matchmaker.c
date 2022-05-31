#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <readfile.h>




int main (void)
{



    //  Socket to talk to clients
    void *context = zmq_ctx_new ();
    void *responder = zmq_socket (context, ZMQ_REP);
    int rc = zmq_bind (responder, "tcp://*:5555");
    assert (rc == 0);

    while (1) {
        int loop = 0;
        
        char buffer [10];
        //printf("\n%s","input");
        //char* msg = scanf("%s");
        zmq_recv (responder, buffer, 10, 0);
        //printf ("Received Hello\n");
        printf(buffer);
                         //  Do some 'work'
        zmq_send (responder,"5", 5, 0);
        printf("%c",loop);loop++;
    }
    return 0;
}


 

 
   


    


   

