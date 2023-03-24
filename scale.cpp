#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"

using namespace std;


void writeImageX2(std::string filename, int image[MAX_H*2][MAX_W*2], int height, int width) {
	ofstream ostr;
	ostr.open(filename);
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

void scale(std::string fileimg) {
    int height; 
    int width; 
    int image[MAX_H][MAX_W];
    int grid[MAX_H*2][MAX_W*2];
    

    readImage(fileimg, image, height, width);

    for(int row=0; row<height*2; row++) {
        for (int col=0; col<width*2; col++) {
            grid[row][col] = image[row/2][col/2];
        }
    }

    writeImageX2("picE.pgm", grid, height*2, width*2);
}