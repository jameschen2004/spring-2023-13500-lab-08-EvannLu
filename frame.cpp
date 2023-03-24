#include <iostream>
#include "imageio.h"

using namespace std;

void frame(std::string fileimg) {
    int height; 
    int width; 
    int image[MAX_H][MAX_W];
    
    readImage(fileimg, image, height, width);

      bool isFrame = false;

    for(int i=0; i<height; i++) {
        for (int j=0; j<width; j++) {
            isFrame = (((0.25 * width < j) && (j < 0.75 * width)) && i == (int)(.25 * height)) || 
                    (((0.25 * width < j) && (j < 0.75 * width)) && i == (int)(.75 * height)) ||
                    (((0.25 * height < i) && (i < 0.75 * height)) && j == (int)(.25 * width)) ||
                    (((0.25 * height < i) && (i < 0.75 * height)) && j == (int)(.75 * width)) ;
            if(isFrame) {
                image[i][j] = 255;
            }
        }
    }

    writeImage("picD.pgm", image, height, width);
}