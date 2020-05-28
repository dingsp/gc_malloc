// Specification of Size classes
#include <cstddef>
// The number of members in SizeClassInfo
static constexpr int kSizeClassInfoMembers = 2;

// Precomputed size class parameters.
struct SizeClassInfo
{
    // Max size storable in that class
    size_t size;

    size_t next_recycle_bin;
};

const SizeClassInfo kSizeClasses[] = {
    // <bytes>, <pages>
    {0, 0},
    {8, 0},
    {16, 0},
    {32, 0},
    {48, 0},
    {64, 0},
    {80, 0},
    {96, 0},
    {112, 0},
    {128, 0},
    {144, 0},
    {160, 0},
    {176, 0},
    {192, 0},
    {208, 0},
    {224, 0},
    {240, 0},
    {256, 0},
    {272, 0},
    {288, 0},
    {304, 0},
    {336, 0}, //small block
    {368, 8},
    {400, 7},
    {416, 7},
    {464, 6},
    {512, 6},
    {576, 6},
    {640, 6},
    {704, 6},
    {768, 5},
    {832, 5},
    {896, 5},
    {960, 5},
    {1024, 4},
    {1152, 4},
    {1280, 4},
    {1408, 4},
    {1536, 4},
    {1664, 4},
    {1920, 3},
    {2048, 3},
    {2176, 3},
    {2304, 2},
    {2432, 2},
    {2688, 2},
    {2944, 2},
    {3200, 1},
    {3584, 1},
    {4096, 1},
    {4608, 1},
    {5376, 1},
    {6528, 1},
    {7168, 1},
    {8192, 1},
    {9344, 1},
    {10880, 1},
    {13056, 1},
    {13952, 1},
    {16384, 1},
    {19072, 1},
    {21760, 1},
    {24576, 1},
    {28032, 1},
    {32768, 1},
    {38144, 1},
    {40960, 1},
    {49152, 1},
    {57344, 1},
    {65536, 1},
    {81920, 1},
    {98304, 1},
    {114688, 1},
    {131072, 1},
    {163840, 1},
    {196608, 1},
    {229376, 1},
    {262144, 1} //large block
};