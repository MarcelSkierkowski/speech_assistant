#include <iostream>
#include <thread>
#include <vector>

void microphoneThread() {
    while (true) {
        ;
    }
}

void processingThread() {
    while (true) {
        ;
    }
}

int main() {
    std::thread microphone_thread(microphoneThread);
    std::thread processing_thread(processingThread);

    microphone_thread.join();
    processing_thread.join();

    return 0;
}