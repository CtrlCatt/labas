cmake_minimum_required(VERSION 3.20)
project(MyGreatProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)




# Указываем исходные файлы
set(SOURCE_FILES lab_1.cpp Days.cpp)

# Указываем заголовочные файлы
set(HEADER_FILES header.h )


# Добавляем исходные файлы к исполняемому файлу
add_executable(my_laba_1 ${SOURCE_FILES} ${HEADER_FILES})

# тесты
enable_testing()

add_executable(
  googltest
  googltest.cpp
  Days.cpp
)
target_link_libraries(
  googltest
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(googltest)