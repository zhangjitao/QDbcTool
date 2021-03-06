#ifndef DEFINES_H
#define DEFINES_H

enum SpellEffectIndex
{
    EFFECT_INDEX_0     = 0,
    EFFECT_INDEX_1     = 1,
    EFFECT_INDEX_2     = 2
};

#define MAX_EFFECT_INDEX 3

enum Threads
{
    THREAD_OPENFILE,
    THREAD_SEARCH,
    THREAD_EXPORT_SQL,
    THREAD_EXPORT_CSV,
    THREAD_WRITE_DBC,
    MAX_THREAD
};

enum BarOp
{
    BAR_STEP,
    BAR_SIZE
};

#endif
