#include <iostream> 
#include "imageio.h"

int main() {

    invert("image1.pgm");
    invert_half("image1.pgm");
    box("image1.pgm");
    frame("image1.pgm");
    scale("image1.pgm");
    pixelate("image1.pgm");
  

    return 0;
}