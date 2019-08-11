project( pattern_localizer )

find_package(OpenCV REQUIRED)

message("Opencv Include: " ${OpenCV_INCLUDE_DIRS})
message("Opencv Libs: " ${OpenCV_LIBS})

include_directories(
	${OpenCV_INCLUDE_DIRS}
)

add_library(
	patternMap STATIC
	PatternMap.h
	PatternMap.cpp
)

target_link_libraries(
	patternMap
	${OpenCV_LIBS}
)
