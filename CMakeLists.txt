cmake_minimum_required(VERSION 3.5)
cmake_policy(SET CMP0115 NEW) # Set policy to NEW

project(TutorialSessions VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# Include directories for SFML and Raylib
include_directories(include)
include_directories(/opt/homebrew/Cellar/sfml/2.6.1/include) # Add SFML include path
include_directories(/opt/homebrew/Cellar/raylib/5.0/include) # Add Raylib include path

# Find SFML and Raylib
find_package(SFML 2.6 COMPONENTS system window graphics REQUIRED) # SFML
find_package(raylib REQUIRED) # Raylib

# Add executables
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

add_executable(
  Tuto1
  src/tuto1.cpp
)

add_executable(
  Meowdes 
  src/main.cpp 
  src/Entity.cpp 
  src/Meowgolas.cpp 
  src/NPC.cpp 
  src/Enemy.cpp 
  src/Room.cpp 
  src/Weapon.cpp 
  src/Top.cpp 
  src/Food.cpp 
  src/Item.cpp 
  src/Position.cpp 
  src/Inventory.cpp)

  add_executable(
    TestTuto
    src/tuto-3.cpp)

# Link SFML to the TutorialSessions target
target_link_libraries( 
  TutorialSessions
  sfml-system 
  sfml-window 
  sfml-graphics
)

# Link Raylib to the same target (TutorialSessions)
target_link_libraries(
  TutorialSessions
  raylib
)

# If you also want to use Raylib in other executables, link it similarly:
target_link_libraries(
  TutorialSessionTest1
  raylib
)

target_link_libraries(
  Tuto1
  raylib
)

# Set C++ standard
set_property(TARGET TutorialSessions PROPERTY CXX_STANDARD 17)
set_property(TARGET TutorialSessionTest1 PROPERTY CXX_STANDARD 17)
set_property(TARGET Tuto1 PROPERTY CXX_STANDARD 17)
set_property(TARGET Meowdes PROPERTY CXX_STANDARD 17)