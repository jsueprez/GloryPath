#include "benchmark/benchmark.h"
#include "chapterone.h"

static void BM_isUnique_BruteForce(benchmark::State& state)
{
    ChapterOne object;
    string s1 = "Unique char"; // U(85) != u(117)

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        object.isUnique_BruteForce(s1);
    }
}
BENCHMARK(BM_isUnique_BruteForce);

static void BM_isUnique_OwnHashTable(benchmark::State& state)
{
    ChapterOne object;
    string s1 = "Unique char"; // U(85) != u(117)

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        object.isUnique_OwnHashTable(s1);
    }
}
BENCHMARK(BM_isUnique_OwnHashTable);

static void BM_isUnique_StdBitSet(benchmark::State& state)
{
     ChapterOne object;
     string s1 = "Unique char"; // U(85) != u(117)

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        object.isUnique_StdBitSet(s1);
    }
}
BENCHMARK(BM_isUnique_StdBitSet);

static void BM_isUnique_StdUnorderepMap(benchmark::State& state)
{
    ChapterOne object;
    string s1 = "Unique char"; // U(85) != u(117)

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        object.isUnique_StdUnorderepMap(s1);
    }
}
BENCHMARK(BM_isUnique_StdUnorderepMap);
