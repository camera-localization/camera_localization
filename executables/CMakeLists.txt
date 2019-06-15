project( executer )

add_executable(dummy_main main.cpp)

target_link_libraries(
	dummy_main
	patternMap
)