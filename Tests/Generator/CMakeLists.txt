find_program(UV_EXECUTABLE uv REQUIRED)

add_test(
        NAME GeneratorModelTest
        COMMAND
        ${UV_EXECUTABLE}
        run
        python
        ${CMAKE_CURRENT_SOURCE_DIR}/GeneratorModelTest.py
)

set_tests_properties(
        GeneratorModelTest
        PROPERTIES
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
)

add_test(
        NAME GeneratedCodeTest
        COMMAND
        ${UV_EXECUTABLE}
        run
        python
        ${CMAKE_CURRENT_SOURCE_DIR}/GeneratedCodeTest.py
)

set_tests_properties(
        GeneratedCodeTest
        PROPERTIES
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
)

add_test(
        NAME UnionRegressionTest
        COMMAND
        ${UV_EXECUTABLE}
        run
        python
        ${CMAKE_CURRENT_SOURCE_DIR}/UnionRegressionTest.py
)

set_tests_properties(
        UnionRegressionTest
        PROPERTIES
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
)

add_test(
        NAME FullGenerationTest
        COMMAND
        ${UV_EXECUTABLE}
        run
        python
        ${CMAKE_CURRENT_SOURCE_DIR}/FullGenerationTest.py
)

set_tests_properties(
        FullGenerationTest
        PROPERTIES
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
)

add_test(
        NAME GenerationIdempotencyTest
        COMMAND
        ${UV_EXECUTABLE}
        run
        python
        ${CMAKE_CURRENT_SOURCE_DIR}/GenerationIdempotencyTest.py
)

set_tests_properties(
        GenerationIdempotencyTest
        PROPERTIES
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
)
