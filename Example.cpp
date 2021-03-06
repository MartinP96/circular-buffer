#include "CircuralBuffer.h"

// Simple example with CircuralBuffer

int main()
{
    // Declare circular buffer size 5 float
    int bufferSize = 5;
    CircuralBuffer<float> buffer(bufferSize);
    
    // Write data to buffer
    buffer.writeToBuffer(1.5);
    buffer.writeToBuffer(10.1);
    buffer.writeToBuffer(3.5);
    buffer.writeToBuffer(11.1);
    buffer.writeToBuffer(11.1);

    // Reading from buffer
    float data;
    buffer.readFromBuffer(&data);
    buffer.readFromBuffer(&data);
    buffer.readFromBuffer(&data);
    buffer.readFromBuffer(&data);
}
