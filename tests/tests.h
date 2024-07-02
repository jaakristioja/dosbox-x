#if C_DEBUG

#if !defined(_WIN32_WINDOWS)

// The following are source files containing unit tests.

#include "dos_files_tests.cpp"
#include "drives_tests.cpp"
#include "shell_cmds_tests.cpp"
#include "shell_redirection_tests.cpp"

#else
//google test code causes problem on win9x, remove them and add empty implementations for linkage.

#include <assert.h>
#include <gtest/gtest.h>
namespace testing {
void InitGoogleTest(int* argc, char** argv) {}

UnitTest* UnitTest::GetInstance() {static UnitTest ut; return &ut;}
UnitTest::UnitTest(){}
UnitTest::~UnitTest(){}
int UnitTest::Run() {return 0;}

namespace internal {
    Mutex::Mutex(){}
    Mutex::~Mutex(){}
}
}

#endif

#endif // DEBUG
