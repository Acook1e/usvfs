#pragma once
#include <map>
#include <string>
#include <vector>

namespace usvfs
{
namespace settings
{
  inline bool enableCoW = false;
  inline std::string current_process;
  inline std::string mods_dir;
  inline std::string overwrite_dir;
  inline std::vector<std::string> exclude_mods;
  inline std::map<std::string, std::string> output_directories;
}  // namespace settings
}  // namespace usvfs
