// pg 281, 282

#include <iostream> 
#include <cstdlib> 
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *thread_id)
{
    long tid = long(thread_id);
    cout << "Hello World! - Thread Id: " << tid << endl;
    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    int rc;

    for (int i = 0; i < NUM_THREADS; i++)
    {
        cout << "main() : Creating Thread, " << i << endl;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);

        if (rc)
        {
            cout << "Unable to Create Thread!" << endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);

    return 0;
}