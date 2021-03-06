// clang-format off
// Generated file (from: avg_pool_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace avg_pool_float_1_relaxed {
// Generated avg_pool_float_1_relaxed test
#include "generated/examples/avg_pool_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/avg_pool_float_1_relaxed.model.cpp"
} // namespace avg_pool_float_1_relaxed

TEST_F(GeneratedTests, avg_pool_float_1_relaxed) {
    execute(avg_pool_float_1_relaxed::CreateModel,
            avg_pool_float_1_relaxed::is_ignored,
            avg_pool_float_1_relaxed::get_examples());
}

TEST_F(DynamicOutputShapeTest, avg_pool_float_1_relaxed_dynamic_output_shape) {
    execute(avg_pool_float_1_relaxed::CreateModel_dynamic_output_shape,
            avg_pool_float_1_relaxed::is_ignored_dynamic_output_shape,
            avg_pool_float_1_relaxed::get_examples_dynamic_output_shape());
}

