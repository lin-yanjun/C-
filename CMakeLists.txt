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
        chapter01/05_Practice.c
        chapter01/06_review.c
        chapter02/01_Identifier.c
        chapter02/02_Variable.c
        chapter02/03_Int.c
        chapter02/04_FloatDouble.c
        chapter02/05_Char.c
        chapter02/06_Boolean.c
        chapter02/06_BooleanTeat.c
)
add_executable(main main.c)
add_executable(02_CommentTest chapter01/02_CommentTest.c)
add_executable(03_HelloC chapter01/03_HelloC.c)
add_executable(04_Printf chapter01/04_Printf.c)
add_executable(05_Practice chapter01/05_Practice.c)
add_executable(06_review chapter01/06_review.c)
add_executable(01_Identifier chapter02/01_Identifier.c)
add_executable(02_variable chapter02/02_Variable.c)
add_executable(03_int chapter02/03_Int.c)
add_executable(04_FloatDouble chapter02/04_FloatDouble.c)
add_executable(05_Char chapter02/05_Char.c)
add_executable(06_Boolean chapter02/06_Boolean.c)
add_executable(06_BooleanTeat chapter02/06_BooleanTeat.c)