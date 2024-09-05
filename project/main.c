#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>


int main() {

    int sleep = 0;
    while(1) {
        //Do something
        int led = 13;

        while(sleep < 1000000) {
            sleep++;
        }
        //Do nothing
        while(sleep > 0) {
            sleep--;
        }

        
    }
    return 0;
}