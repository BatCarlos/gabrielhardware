#ifndef TEST_BUTTON_H
#define TEST_BUTTON_H
#define E_BUTTON 33

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver/gpio.h"
#include <stdio.h>

int switch_update();
void test_button (void*);

#endif

