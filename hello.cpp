// hello.cpp
#include <emscripten.h>
#include <iostream>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    void say_hello() {
        printf("Hello from WebAssembly!\n");
    }
}
