#include "test_button.h"

int switch_update(){
  int e_button_status = gpio_get_level(E_BUTTON);
  return e_button_status;
}

void test_button (void*){
  while(1){
  printf(" %d\n",switch_update());
  vTaskDelay( 500 / portTICK_PERIOD_MS);
  }
}
