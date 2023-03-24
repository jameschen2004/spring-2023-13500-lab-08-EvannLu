#pragma once

const int MAX_H = 512;
const int MAX_W = 512;

void readImage(std::string filename, int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(std::string filename, int image[MAX_H][MAX_W], int height, int width); 
void invert(std::string fileimg);
void invert_half(std::string fileimg);
void box(std::string fileimg);
void frame(std::string fileimg);
void scale(std::string fileimg);
void pixelate(std::string fileimg);
