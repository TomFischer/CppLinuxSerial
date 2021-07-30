file(GLOB_RECURSE CppLinuxSerialArduinoTests_SRC
        "*.cpp"
        "*.hpp")

add_executable(CppLinuxSerialArduinoTests ${CppLinuxSerialArduinoTests_SRC})

target_link_libraries(CppLinuxSerialArduinoTests LINK_PUBLIC CppLinuxSerial gtest_main ${CMAKE_THREAD_LIBS_INIT})
