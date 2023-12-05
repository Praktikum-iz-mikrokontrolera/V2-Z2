#include "mbed.h"

DigitalOut dioda(PA_11);

void ISR_taster2() {
    dioda = 1;
    wait_us(1000000);
    dioda = 0;
}

int main()
{
    InterruptIn taster2(PC_8);
    taster2.fall(&ISR_taster2);

    while (true);
}

    
