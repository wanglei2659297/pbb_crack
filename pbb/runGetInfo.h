#pragma once
#include <string>
#include "Utils.h"

struct srcInfo 
{
	int ver;
    std::size_t size;
    std::size_t old_size;
};

void runGetInfo(fInfo file);
pvKey getKey(fInfo file);

// 获取源文件指针以及大小相关信息
// only call once
srcInfo getSrcInfo(const unsigned char *mem, std::size_t size);
