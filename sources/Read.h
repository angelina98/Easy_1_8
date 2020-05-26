#pragma once

#include <vector>
#include <string>
#include <fstream>

namespace base {
    void made(std::string file, std::vector<uint8_t> data);
    std::vector<uint8_t> read(std::string file);
}
