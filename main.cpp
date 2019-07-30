/* get angle from two encoders*/
#include "mbed.h"
#include "QEncoder.h"
QEncoder encoA(D2,D3);
QEncoder encoB(D4,D5);
DigitalOut led1(LED1);
int main() {
    encoA.init();encoB.init();
    encoA.setCount(0);encoB.setCount(0);
    while(1) {
             printf("A= %d, B= %d \n", encoA.getCount(), encoB.getCount());
             wait(0.01);
    }
}
