cmake_minimum_required(VERSION 3.15)


project(ReadBitsFix)

include(FetchContent)

add_library(${PROJECT_NAME} SHARED
    "src/main.cpp"
)



FetchContent_Declare( 
	"memwrapper"
	GIT_REPOSITORY "https://github.com/The-Musaigen/memwrapper.git"
	GIT_TAG "7d51e3134d8f955651ef7dda8bab44b0efb0665f"
)

FetchContent_MakeAvailable("memwrapper")



# memwrapper
add_library(memwrapper INTERFACE)
target_include_directories(${PROJECT_NAME} PUBLIC ${memwrapper_SOURCE_DIR})
# 



set_target_properties(${PROJECT_NAME} PROPERTIES
    SUFFIX ".asi"
	CXX_STANDARD "20"
    CXX_STANDARD_REQUIRED ON
)