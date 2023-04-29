#include <iostream>
#include "imageio.h"

using namespace std;

void box(std::string fileimg) {
    int height; 
    int width; 
    int image[MAX_H][MAX_W];
    
    readImage(fileimg, image, height, width);

    for(int i=0; i<height; i++) {
        for (int j=0; j<width; j++) {
            if((0.25 * width < j) && (j < 0.75 * width) && (0.25 * height < i) && (i < 0.75 * height)) {
                image[i][j] = 255;
            }
        }
    }
    writeImage("picC.pgm", image, height, width);
}
