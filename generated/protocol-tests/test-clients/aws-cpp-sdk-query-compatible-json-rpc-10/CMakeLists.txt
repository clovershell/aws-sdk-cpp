add_project(aws-cpp-sdk-query-compatible-json-rpc-10 "C++ SDK for the AWS query-compatible-json-rpc-10 service" aws-cpp-sdk-core)

file(GLOB AWS_QUERY-COMPATIBLE-JSON-RPC-10_HEADERS
    "include/aws/query-compatible-json-rpc-10/*.h"
)

file(GLOB AWS_QUERY-COMPATIBLE-JSON-RPC-10_MODEL_HEADERS
    "include/aws/query-compatible-json-rpc-10/model/*.h"
)

file(GLOB AWS_QUERY-COMPATIBLE-JSON-RPC-10_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_QUERY-COMPATIBLE-JSON-RPC-10_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB QUERY-COMPATIBLE-JSON-RPC-10_UNIFIED_HEADERS
    ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_HEADERS}
    ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_MODEL_HEADERS}
)

file(GLOB QUERY-COMPATIBLE-JSON-RPC-10_UNITY_SRC
    ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_SOURCE}
    ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("QUERY-COMPATIBLE-JSON-RPC-10" QUERY-COMPATIBLE-JSON-RPC-10_UNITY_SRC)
endif()

file(GLOB QUERY-COMPATIBLE-JSON-RPC-10_SRC
    ${QUERY-COMPATIBLE-JSON-RPC-10_UNIFIED_HEADERS}
    ${QUERY-COMPATIBLE-JSON-RPC-10_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\query-compatible-json-rpc-10" FILES ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_HEADERS})
        source_group("Header Files\\aws\\query-compatible-json-rpc-10\\model" FILES ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_MODEL_SOURCE})
    endif(MSVC)
endif()

set(QUERY-COMPATIBLE-JSON-RPC-10_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${QUERY-COMPATIBLE-JSON-RPC-10_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_QUERYCOMPATIBLEJSONRPC10_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/query-compatible-json-rpc-10)
install (FILES ${AWS_QUERY-COMPATIBLE-JSON-RPC-10_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/query-compatible-json-rpc-10/model)

do_packaging()


