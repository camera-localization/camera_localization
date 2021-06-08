/**
 * @file main.cpp
 * @brief
 * @date 2019-06-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>
#include "pattern_localization/PatternMap.h"

int main() {
    std::cout << "Hello World!" << std::endl;
    std::cout << "Test Value: " << getTestValue() << std::endl;
    showImage();
    showImage("../data/camera_calibration/ps3_640x480/2019-06-23_7x9_2.8mm/2019-06-23-114903.jpg");
    std::string image_path = "../data/camera_calibration/ps3_640x480/2019-06-23_7x9_2.8mm/2019-06-23-114903.jpg";
    cv::Size patterndims(8,6);
    draw_pattern(image_path, patterndims);

    return 0;
}
