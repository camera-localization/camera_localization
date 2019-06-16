project( executer )

add_executable(dummyMain main.cpp)

target_link_libraries(
	dummyMain
	patternMap
)