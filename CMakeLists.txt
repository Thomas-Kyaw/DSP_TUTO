cmake_minimum_required(VERSION 3.5)
cmake_policy(SET CMP0115 NEW) # Set policy to NEW

project(TutorialSessions VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(include)
include_directories(/opt/homebrew/Cellar/sfml/2.6.1/include) # Add SFML include path

find_package(SFML 2.6 COMPONENTS system window graphics REQUIRED) # Update version

add_executable(
  TutorialSessions
  src/Test_SFML_OOP.cpp
  src/CircleShape.cpp 
  src/RectangleShape.cpp
)

add_executable(
  TutorialSessionTest1
  src/test1.cpp
)

target_link_libraries( 
  TutorialSessions
  sfml-system 
  sfml-window 
  sfml-graphics
)

add_executable(
  Tuto1
  src/tuto1.cpp
)

set_property(TARGET TutorialSessions PROPERTY CXX_STANDARD 17)
set_property(TARGET TutorialSessionTest1 PROPERTY CXX_STANDARD 17)