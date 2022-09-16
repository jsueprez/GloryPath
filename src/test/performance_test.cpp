#include "benchmark/benchmark.h"
#include "chapterone.h"

static void BM_SomeFunction(benchmark::State& state)
{
    ChapterOne object;

    std::string s1 = "hola";

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        object.isUnique_BruteForce(s1);
    }
}

// Register the function as a benchmark
BENCHMARK(BM_SomeFunction);
