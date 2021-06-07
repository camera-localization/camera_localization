/**
 * @file PatternMap.h
 * @brief
 * @date 2019-06-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
#include <opencv2/core/matx.hpp>

int getTestValue();
int showImage();

int showImage(std::string filePath);
void draw_pattern(std::string path, cv::Size patternsize);

