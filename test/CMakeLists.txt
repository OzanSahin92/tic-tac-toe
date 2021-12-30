file(GLOB TestSrcFiles ../src/TicTacToeField.cpp  ../src/TicTacToeGame.cpp)

add_executable(gtest gTest.cpp
        testTicTacToeField.cpp
        testTicTacToeGame.cpp
        ${TestSrcFiles})

target_link_libraries(gtest ${GTEST_BOTH_LIBRARIES} pthread)

add_test(AllTestsInGTests gtest)
