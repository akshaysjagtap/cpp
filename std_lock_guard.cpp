/*
 The std::lock_guard is used to acquire and release the lock automatically, ensuring that only one thread can access the critical section at a time.

*/

#include <iostream>
#include <mutex>
#include <thread>

std::mutex myMutex; // Declare a mutex

void sharedResourceFunction(int id) {
    std::lock_guard<std::mutex> lock(myMutex); // Acquire the lock on myMutex

    // Critical section: shared resource is accessed
    std::cout << "Thread " << id << " is accessing the shared resource." << std::endl;

    // The lock is automatically released when std::lock_guard goes out of scope
}

int main() {
    const int numThreads = 5;
    std::thread threads[numThreads];

    // Create and launch a group of threads
    for (int i = 0; i < numThreads; ++i) {
        threads[i] = std::thread(sharedResourceFunction, i);
    }

    // Join the threads with the main thread
    for (int i = 0; i < numThreads; ++i) {
        threads[i].join();
    }

    return 0;
}
