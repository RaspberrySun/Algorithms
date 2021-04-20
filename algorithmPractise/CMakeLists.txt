cmake_minimum_required(VERSION 3.14)
project(algorithmPractise)

set(CMAKE_CXX_STANDARD 11)

add_executable(algorithmPractise JZOffer/tree/isSubTree.cpp JZOffer/tree/mirrorTree.cpp JZOffer/tree/rebuildTree.cpp)
add_executable(JZOffer/tree/isSymmetric.cpp)