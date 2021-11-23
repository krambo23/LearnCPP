// pg 283, 284

#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

struct thread_data
{
    int thread_id;
    char *message;
};

void *PrintHello(void *thread_arg)
{
    struct thread_data *data;
    data = (struct thread_data *)thread_arg;

    cout << "Thread Id: " << data->thread_id << endl;
    cout << "Message: " << data->message << endl;

    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];
    int rc;

    for (int i = 0; i < NUM_THREADS; i++)
    {
        cout << "main() : Creating Thread, " << i << endl;
        td[i].thread_id = i;
        td[i].message = "This is Message";
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&td[i]);

        if (rc)
        {
            cout << "Unable to Create Thread!" << endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);

    return 0;
}