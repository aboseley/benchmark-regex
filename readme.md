
benchmarking std vs boost regex

Building:
```
git clone --recursive https://github.com/aboseley/benchmark-regex
cmake -B build -S . -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/test_regex
```

Results
```shell
Run on (32 X 5083.4 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x16)
  L1 Instruction 32 KiB (x16)
  L2 Unified 512 KiB (x16)
  L3 Unified 32768 KiB (x2)
Load Average: 1.47, 1.27, 0.98
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------
Benchmark                  Time             CPU   Iterations
------------------------------------------------------------
BM_MatchWithBoost       3786 ns         3785 ns       184163
BM_MatchWithStd        49727 ns        49704 ns        14020

```