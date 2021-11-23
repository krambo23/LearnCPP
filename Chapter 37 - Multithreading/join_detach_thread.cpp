// pg 285, 286

#include <iostream> 
#include <cstdlib> 
#include <pthread.h> 
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5

void *wait(void *t)
{
    int i;
    long tid = long(t);
    usleep(1000000 * 1); // 1000000 microsec = 1s
    cout << "Sleeping in thread " << endl;
    cout << "Thread with id : " << tid << " ...exiting " << endl; 
    pthread_exit(NULL);
}


int main()
{
    int rc;
    pthread_t threads[NUM_THREADS];
    pthread_attr_t attr;
    void *status;

    // Initialize and Set Thread as Joinable 
    pthread_attr_init(&attr); 
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for (int i = 0; i < NUM_THREADS; i++)
    {
        cout << "main() : Creating Thread " << i << endl;
        rc = pthread_create(&threads[i], NULL, wait, (void *)i); 
        if (rc)
        {
            cerr << "Error : Unable to Create Thread " << rc << endl;
            exit(-1); 
        }
    }

    // Free Attribute and Wait for the Other Threads 
    pthread_attr_destroy(&attr);
    for (int i = 0; i < NUM_THREADS; i++)
    {
        rc = pthread_join(threads[i], &status); 
        if (rc)
        {
            cerr << "Error : Unable to Join " << rc << endl;
            exit(-1); 
        }
        cout << "main(): Completed Thread Id : " << i << endl;
        cout << "Exiting with Status : " << status << endl; 
        cout << endl;
    }

    cout << "main(): Program Exiting" << endl;
    pthread_exit(NULL);

    return 0;
}