/**
 * @file PatternMap.cpp
 * @brief 
 * @date 2019-06-15
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include "PatternMap.h"

int getTestValue() { 
	return 634; 
}

int showImage(){
	cv::Mat im(3, 4, CV_8UC1, cv::Scalar(7));
	std::cout << im << std::endl;
	return 0;
}

int showImage(std::string filePath){
	cv::Mat im = cv::imread(filePath);
	cv::imshow("calib image", im);
	cv::waitKey(0);
	return 0;
}

