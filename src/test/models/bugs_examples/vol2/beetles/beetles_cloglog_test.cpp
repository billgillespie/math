#include <gtest/gtest.h>
#include <test/models/model_test_fixture.hpp>

class Models_BugsExamples_Vol2_BeetlesCloglog : 
  public Model_Test_Fixture<Models_BugsExamples_Vol2_BeetlesCloglog> {
protected:
  virtual void SetUp() {}
public:
  static std::vector<std::string> get_model_path() {
    std::vector<std::string> model_path;
    model_path.push_back("models");
    model_path.push_back("bugs_examples");
    model_path.push_back("vol2");
    model_path.push_back("beetles");
    model_path.push_back("beetles_cloglog");
    return model_path;
  }

  static bool has_data() {
    return true;
  }

  static bool has_init() {
    return true;
  }

  static size_t num_iterations() {
    return iterations;
  }

  static std::vector<size_t> skip_chains_test() {
    std::vector<size_t> params_to_skip;
    return params_to_skip;
  }

  static void populate_chains() {
    default_populate_chains();
  }

  static std::vector<std::pair<size_t, double> >
  get_expected_values() {
    using std::make_pair;
    size_t index;
    std::vector<size_t> dims;
    dims.push_back(0);
    std::vector<std::pair<size_t, double> > expected_values;

    
    index = chains->get_total_param_index(chains->param_name_to_index("alpha"),
					  dims);
    expected_values.push_back(make_pair(index, -39.77));

    index = chains->get_total_param_index(chains->param_name_to_index("beta"),
					  dims);
    expected_values.push_back(make_pair(index, 22.15));


    index = chains->get_total_param_index(chains->param_name_to_index("rhat"),
					  dims);
    expected_values.push_back(make_pair(index + 0U, 5.623));
    expected_values.push_back(make_pair(index + 1U, 11.28));
    expected_values.push_back(make_pair(index + 2U, 20.91));
    expected_values.push_back(make_pair(index + 3U, 30.32));
    expected_values.push_back(make_pair(index + 4U, 47.74));
    expected_values.push_back(make_pair(index + 5U, 54.08));
    expected_values.push_back(make_pair(index + 6U, 61.02));
    expected_values.push_back(make_pair(index + 7U, 59.92));
    
    return expected_values;

  }

};

INSTANTIATE_TYPED_TEST_CASE_P(Models_BugsExamples_Vol2_BeetlesCloglog,
			      Model_Test_Fixture,
			      Models_BugsExamples_Vol2_BeetlesCloglog);
