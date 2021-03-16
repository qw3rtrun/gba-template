cmake_minimum_required(VERSION 3.15)

# Note that you must copy the cmake folder and the DevkitArmGBA.cmake file in this directory
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_LIST_DIR}/DevkitArmGBA.cmake)
# Add the cmake folder to the modules paths, so that we can use the tools
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
# ASM must be enabled to support .S files
enable_language(ASM)
# Include all the macros and tools needed for GBA development.
include(ToolsGBA)

project(template)

# List all the source files in out directory
LIST(APPEND SOURCE_FILES
        ./source/template.c
        )

LIST(APPEND EXTRA_SOURCE_FILES
        )

LIST(APPEND EXTRA_DATA_FILES
        )

LIST(APPEND INCLUDE_DIRECTORIES
        ${DEVKITPRO}/libtonc/include
        ${DEVKITARM}/arm-none-eabi/include/
        )

LIST(APPEND TARGET_LIBRARIES
        ${DEVKITPRO}/libtonc/lib
        )

link_directories(${TARGET_LIBRARIES})
include_directories(${INCLUDE_DIRECTORIES})
add_executable(template.elf ${SOURCE_FILES} ${INCLUDE_FILES} ${EXTRA_SOURCE_FILES} ${EXTRA_DATA_FILES}) # Create the elf file
add_gba_executable(template.elf) # Generate the .gba from the elf
target_link_libraries(template.elf tonc) # Link the application, libgba and maxmod

# List all the MaxMOD music files
#file(GLOB_RECURSE MUSIC_FILES
#        ./music/*
#        )
#target_maxmod_file(template.elf ${MUSIC_FILES}) # Build soundbank file from music files

# List all the binary files
#file(GLOB_RECURSE DATA_FILES
#        ./data/*.bin
#        )
