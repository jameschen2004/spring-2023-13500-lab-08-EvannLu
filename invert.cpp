#include <iostream>
#include "imageio.h"

using namespace std;

void invert(std::string fileimg) {
    int height; 
    int width; 
    int image[MAX_H][MAX_W];
    
    readImage(fileimg, image, height, width);

    for (int i=0; i<height; i++)
        for(int j=0; j<width; j++)
            image[i][j] = 255 - image[i][j];

    writeImage("picA.pgm", image, height, width);
}