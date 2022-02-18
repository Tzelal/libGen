#include <stdbool.h>
#include <stdint.h>

#ifndef FUNCLIB_H_INCLUDED
#define FUNCLIB_H_INCLUDED


#define COMMAND_LENGTH 100
char command[COMMAND_LENGTH];


volatile uint16_t senOneFlag = false;
volatile uint16_t senTwoFlag = false;
volatile uint16_t senThreeFlag = false;
volatile uint16_t rstOneFlag = false;
volatile uint16_t rstTwoFlag = false;
volatile uint16_t rstThreeFlag = false;

void mcu_init();
void uart_init();
void uart_write(char* str);
void uart_writen(char* data, int n);
void uart_writec(char data);
char* value_percent(float volts);

float offset;
float pressure;
float output;

int count = 10; // don't increase too much, it affects to the range
int raw = 0;
int res;

char volta0[] = "  A0: ";
char volta1[] = "  A1: ";
char volta2[] = "  A2: ";
char bars[] = " bars. ";
char dot[] = ".";
char zerro[] = "0";
char rst[] = "  -----------RESET-----------\n";
char line[] = "  ---------------------------\n";
char newline[] = " \r\n";
char* unitAll;

unsigned int adc[8];

volatile int unitFlag;
volatile uint8_t counter;
volatile uint8_t k;

#endif // FUNCLIB_H_INCLUDED
