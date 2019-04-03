#define BOOST_TEST_MODULE hello_wolrd_test

#include "../src/app.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(helloworld_test_suite)

    BOOST_AUTO_TEST_CASE(app_version) {
        BOOST_CHECK(AppVersion() == "4.3.2");
    }

    BOOST_AUTO_TEST_CASE(app_version_with_tweak) {
        BOOST_CHECK(AppVersion(true) == "4.3.2.1");
    }

    BOOST_AUTO_TEST_CASE(app_version_major) {
        BOOST_CHECK(AppVersionMajor() == "4");
    }

    BOOST_AUTO_TEST_CASE(app_version_minor) {
        BOOST_CHECK(AppVersionMinor() == "3");
    }

    BOOST_AUTO_TEST_CASE(app_version_patch) {
        BOOST_CHECK(AppVersionPatch() == "2");
    }

    BOOST_AUTO_TEST_CASE(app_version_tweak) {
        BOOST_CHECK(AppVersionTweak() == "1");
    }

BOOST_AUTO_TEST_SUITE_END()
