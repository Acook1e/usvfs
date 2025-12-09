#pragma once
#include <map>
#include <string>
#include <vector>

namespace usvfs
{
namespace settings
{
  inline std::string mods_dir;
  inline std::string overwrite_dir;
  inline std::vector<std::string> exclude_mods;
  inline std::map<std::string, std::string> output_directories;
  inline std::string current_process;
}  // namespace settings
}  // namespace usvfs
