#include <cstdio>
#include "touchpad/touchpad.h"

int main()
{
  TouchPad pad;
  if (!pad.start()) {
    printf ("Failed to initialize pad.!\n" );
    return -1;
  }
  printf("Ready\n");

  while (true) {
    if (pad.update()) {
      printf("Fingers:%d Action:%d Zoom:%f Pan:%f %f\r", pad.nfingers, pad.action, pad.zoom_amount, pad.pan_amount.x, pad.pan_amount.y);
    }
  }

  return 0;
}

