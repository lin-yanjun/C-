cmake_minimum_required(VERSION 3.26)
project(CProject C)

set(CMAKE_C_STANDARD 99)

add_executable(CProject main.c
        chapter01/01_Hello.c
)

add_executable(01_Hello chapter01/01_Hello.c
        chapter01/02_CommentTest.c
        chapter01/03_HelloC.c
        chapter01/04_Printf.c
        chapter01/05_Practice.c)
add_executable(main main.c)
add_executable(02_CommentTest chapter01/02_CommentTest.c)
add_executable(03_HelloC chapter01/03_HelloC.c)
add_executable(04_Printf chapter01/04_Printf.c)
add_executable(05_Practice chapter01/05_Practice.c)