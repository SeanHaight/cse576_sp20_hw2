#include "../image.h"
#include "../utils.h"

#include <string>

using namespace std;

int main(int argc, char **argv)
  {
    Image rach = load_image("data/Rachel.JPG");
    pair<Image,Image> res = sobel_image(rach);
    Image mag = res.first;
    Image theta = res.second;

    feature_normalize(mag);
    feature_normalize(theta);
    Image rach_color = colorize_sobel(rach);
    save_png(mag,"output/rach_mag");
    save_png(theta,"output/rach_theta");
    save_png(rach_color, "output/rach_color");
    return 0;
  }