#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>
FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
        FuzzedDataProvider fuzzed_data(data, size);
        float a = fuzzed_data.ConsumeFloatingPoint<float>();
        float b = fuzzed_data.ConsumeFloatingPoint<float>();
        std::string c = fuzzed_data.ConsumeRandomLengthString();
        calculator(a, c[0], b);


}

