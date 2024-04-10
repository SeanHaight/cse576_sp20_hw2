#include <cmath>
#include "image.h"
#include <iostream>

using namespace std;

// HW1 #1
// float x,y: inexact coordinates
// int c: channel
// returns the nearest neighbor to pixel (x,y,c)
float Image::pixel_nearest(float x, float y, int c) const
  {
  // Since you are inside class Image you can
  // use the member function pixel(a,b,c)
  int round_x = (int) x;
  int round_y = (int) y;

  if (x - round_x >= .5) round_x += 1;
  if (y - round_y >= .5) round_y += 1;
  // TODO: Your code here
  
  return clamped_pixel(round_x, round_y, c);
  }

// HW1 #1
// float x,y: inexact coordinates
// int c: channel
// returns the bilinearly interpolated pixel (x,y,c)
float Image::pixel_bilinear(float x, float y, int c) const
  {
  // Since you are inside class Image you can
  // use the member function pixel(a,b,c)
  
  
  // TODO: Your code here
  
  NOT_IMPLEMENTED();
  
  
  return 0;
  }

// HW1 #1
// int w,h: size of new image
// const Image& im: input image
// return new Image of size (w,h,im.c)
Image nearest_resize(const Image& im, int w, int h)
  {
  Image ret(w,h,im.c);
  for (int i = 0; i < w; i ++) for (int j = 0; j < h; j++) for (int ch = 0; ch < im.c; ch ++){
      ret(i,j,ch) = im.pixel_nearest(i, j, ch);
  }

  save_image(ret, "output/first_resize_attempt");
  // TODO: Your code here
  
  NOT_IMPLEMENTED();
  
  
  
  return ret;
  }


// HW1 #1
// int w,h: size of new image
// const Image& im: input image
// return new Image of size (w,h,im.c)
Image bilinear_resize(const Image& im, int w, int h)
  {
  
  // TODO: Your code here
  
  NOT_IMPLEMENTED();
  
  
  return Image();
  }


