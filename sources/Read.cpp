#include "Read.h"

void base::made(std::string file, std::vector<uint8_t> data)
{
    std::ofstream object;
    object.open(file, std::ios::binary);

    if (data.begin() == data.end())
    {
        throw std::length_error("nothing");
    }

    else
    {
        for (auto location : data)
            object.write((char*)(&location), sizeof(location));
    }
    object.close();
}

std::vector<uint8_t> base::read(std::string file_name)
{
    std::ifstream in;

    in.open(file_name, std::ios::binary);
    in.seekg(0, std::ios::end);
    auto dim = in.tellg();
    in.seekg(std::ios::beg);

    if (!in.is_open())
        throw std::ios_base::failure("nothing can be opened");

    std::vector<uint8_t> finish(dim);
    for (auto& place : finish)
        in >> place;

    in.close();
    return finish;
}
