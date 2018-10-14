# Touchpad
C++ wrapper in Windows for easy access to the laptop touchpad using the synaptics SDK.

Motivation
----------

I was looking for something easy to integrate to work with the laptop touchpad and that was able to detect at least two fingers, zoom and pan.

Example usage
-------------

```cpp

  TouchPad pad;
  if (!pad.start()) 
    return;
  while (true) {
    if (pad.update()) {  // New data arrived..
      printf("Fingers:%d Action:%d Zoom:%f Pan:%f %f\r", pad.nfingers, pad.action, pad.zoom_amount, pad.pan_amount.x, pad.pan_amount.y);
      // pad.fingers[i] to access each individual finger.
    }
  }
```

Status
------

- Runs on Windows (x64). VC2017 sample solution included
- Support up to 4 fingers
- Detects panning & zooming actions
- No CMakefile, this should be supereasy to integrate. Link against the two libs inside the touchpad/lib folder
- The geometry.h/cpp is not really needed, you probably have something similar.
  

