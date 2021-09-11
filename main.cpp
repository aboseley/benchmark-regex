#include <iostream>
#include <string>
#include <boost/regex.hpp>
#include <regex>
#include <benchmark/benchmark.h>

using namespace std::string_literals;

static void BM_MatchWithBoost(benchmark::State &state) {
  using namespace boost;
  auto const ep = "tcp:://foo:1234"s;
  while (state.KeepRunning()) {
    auto const dynamic_tcp = regex("^(tcp://.*):([*!])(\\[(\\d+)?-(\\d+)?\\])?$");
    auto m = smatch{};
    auto const r = regex_match(ep, m, dynamic_tcp);
  }
}
BENCHMARK(BM_MatchWithBoost);

static void BM_MatchWithStd(benchmark::State &state) {
  using namespace std;
  auto const ep = "tcp:://foo:1234"s;
  while (state.KeepRunning()) {
    auto const dynamic_tcp = regex("^(tcp://.*):([*!])(\\[(\\d+)?-(\\d+)?\\])?$");
    auto m = smatch{};
    auto const r = regex_match(ep, m, dynamic_tcp);
  }
}
BENCHMARK(BM_MatchWithStd);

BENCHMARK_MAIN();