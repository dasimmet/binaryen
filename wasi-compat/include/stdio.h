#pragma once
#include_next <stdio.h>

#if defined(__wasi__) || (defined(__wasm__) && !defined(__EMSCRIPTEN__))
#ifdef __cplusplus
extern "C" {
#endif

FILE* popen(const char* command, const char* type);
int pclose(FILE* stream);

#ifdef __cplusplus
}
#endif
#endif

