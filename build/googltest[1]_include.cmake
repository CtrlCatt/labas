if(EXISTS "C:/labas/build/googltest[1]_tests.cmake")
  include("C:/labas/build/googltest[1]_tests.cmake")
else()
  add_test(googltest_NOT_BUILT googltest_NOT_BUILT)
endif()