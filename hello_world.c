#include <studio.h>
#include "pico/stdlib.h"

int main() {
    setup_default_uart();
    printf("Hello, World!\n");
    return 0;
}

//Dodać następujące elementy do swojego: CNakeList.txt
/*add_executable(hello_world
    hello_world.c
)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(hello_world pico_stdlib)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(hello_world) */