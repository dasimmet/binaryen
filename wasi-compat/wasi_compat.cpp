#if defined(__wasi__) || (defined(__wasm__) && !defined(__EMSCRIPTEN_PTHREADS__))

#include <stdio.h>
#include <stdlib.h>

extern "C" {

FILE* popen(const char* command, const char* type) {
    (void)command;
    (void)type;
    return NULL;
}

int pclose(FILE* stream) {
    (void)stream;
    return -1;
}

int flock(int fd, int operation) {
    (void)fd;
    (void)operation;
    return 0;
}

int __cxa_atexit(void (*)(void*), void*, void*);

int __cxa_thread_atexit(void (*func)(void*), void* obj, void* dso_symbol) {
    return __cxa_atexit(func, obj, dso_symbol);
}

// Exception handling stubs for WASI builds without exception runtime
void* __cxa_allocate_exception(size_t) { abort(); }
void __cxa_throw(void*, void*, void*) { abort(); }
void* __cxa_begin_catch(void*) { abort(); }
void __cxa_end_catch() { abort(); }

} // extern "C"

#endif

