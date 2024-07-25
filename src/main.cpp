#include <memory>

#include "memwrapper/memwrapper.h"



class main
{
public:
    main()
    {
        auto address = memwrapper::search_memory_pattern("samp.dll", "\x7E\x06\x32\xC0\x5E\xC2\x0C", "xxxxxxx");
        memwrapper::write_memory<std::uint8_t>(address, 0x76);
    }
} main_instance;
