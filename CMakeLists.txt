cmake_minimum_required(VERSION 3.14)

project(HVAC_SocketCAN VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(THREADS_PREFER_PTHREAD_FLAG ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g ")

set(QT_DIR "$ENV{HOME}/Qt5.12.12/5.12.12/gcc_64")

# Add the Qt directory to the CMake prefix path
set(CMAKE_PREFIX_PATH "${CMAKE_PREFIX_PATH};${QT_DIR}")

find_package(QT NAMES Qt5 COMPONENTS Core Quick REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Quick REQUIRED)
# Find and link against the threading library
find_package(Threads REQUIRED)


# Add project sources
file(GLOB CPP_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/Pkg/*/*/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/Pkg/*/*/*/*.cpp"
)

# Add headers
file(GLOB HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/Pkg/*/*/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/Pkg/*/*/*/*.h"
)

set(PROJECT_SOURCES
        main.cpp
        qml.qrc
        ${HEADERS}
        ${CPP_SOURCES}
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/
    ${CMAKE_CURRENT_SOURCE_DIR}/Pkg
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(HVAC_SocketCAN
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET HVAC_SocketCAN APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(HVAC_SocketCAN SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(HVAC_SocketCAN
          ${PROJECT_SOURCES}
        )
    endif()
endif()

target_compile_definitions(HVAC_SocketCAN
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(HVAC_SocketCAN
  PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick Threads::Threads)

set_target_properties(HVAC_SocketCAN PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_import_qml_plugins(HVAC_SocketCAN)
    qt_finalize_executable(HVAC_SocketCAN)
endif()
