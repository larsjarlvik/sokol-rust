#define SOKOL_RUST_BINDINGS
#if defined(_WIN32)
#define SOKOL_WIN32_FORCE_MAIN
#endif
// FIXME: macOS Zig HACK without this, some C stdlib headers throw errors
#if defined(__APPLE__)
#include <TargetConditionals.h>
#endif
