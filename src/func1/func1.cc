#include "func1.h"

#include <stdio.h>

//#define EXTERNAL // This define is to include Mod1 calls which is not available.

static void send_error();
static void send_ok();

static void send_error() {
#ifdef EXTERNAL
    Mod1_write_signal_error(0x25);
#endif
}

static void send_ok() {
#ifdef EXTERNAL
    Mod1_write_signal_error(0x0);
#endif
}

int func1(void) {
    int x;
    int *ptr = 0;
    int a = 0;

    a = 1;
#ifdef TAG1
    printf("Tag1 found\n");
#endif
    printf("Input an integer\n");
    scanf("%d", &x);
    printf("The integer is: %d\n", x);
    a = 3;
    ptr = &a;

    return 0;
}

uint8_t receiveInputAndReturnBoolean(void) {
    uint8_t a = 99;
    uint8_t b = 1;
    uint8_t c = 0;
    uint8_t retVal = 0;
#ifdef EXTERNAL
    Mod1_read_signal_a(&a);
    (void)Mod1_read_signal_b(&b);
    (void)Mod1_read_signal_c(&c);
#endif

    if ((1 == a) && (b == 0x10) && (c == 0)) {
        retVal = 1;
        send_ok();
    } else {
        send_error();
        /* Do nothing */
    }
    return retVal;
}