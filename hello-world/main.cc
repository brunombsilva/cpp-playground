#include <iostream>
#include <gflags/gflags.h>
#include <glog/logging.h>
#include <glog/stl_logging.h>

DEFINE_bool(big_menu, true, "Include 'advanced' options in the menu listing");
DEFINE_string(languages, "english,french,german",
                "comma-separated list of languages to offer in the 'lang' menu");

using namespace std;

// https://gflags.github.io/gflags/

//bazel run hello-world -- --logtostderr --nobig_menu --languages=a,b,c
int main(int argc, char *argv[])
{
    // FLAGS_log_dir = "/Users/brunombsilva/Playground/cpp-playground/logs";
    // FLAGS_logtostderr = 1;

    // Optional: parse command line flags
    gflags::ParseCommandLineFlags(&argc, &argv, true);

    // Initialize Google's logging library.
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "Hello, world!";

    LOG(ERROR) << "Big Menu?: " << FLAGS_big_menu;
    LOG(WARNING) << "Languages: " << FLAGS_languages;

    // glog/stl_logging.h allows logging STL containers.
    vector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    LOG(INFO) << "ABC, it's easy as " << x;

    cout << "Hello World" << endl;

    return 0;
}
