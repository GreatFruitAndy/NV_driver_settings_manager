#pragma once

//#include <stl.hpp>
//#include <boost.h>

#include <boost/format.hpp>

//C:\Program Files (x86)\Boost\include\boost

#include <iostream>
#include <fstream>

#include <nvapi.h>
#include <NvApiDriverSettings.h>

#pragma comment(lib, "nvapi.lib")

#include <boost/bimap.hpp>
#include <boost/program_options.hpp>

#include <yaml-cpp/yaml.h>
#include <yaml-cpp/null.h>

//#include "Y:\Downloads\yaml-cpp-release-0.3.0\include\yaml-cpp\null.h"
//#include "Y:\Downloads\yaml-cpp-release-0.3.0\include\yaml-cpp\yaml.h"


#ifdef _DEBUG
#pragma comment(lib, "yamld.lib")
#else
#pragma comment(lib, "yaml.lib")
#endif

using namespace std;
using namespace boost;
using namespace YAML;

#include "nv_api.h"
