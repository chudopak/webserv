#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <cstring>
#include <map>

using std::map;
using std::string;

#define BUFFER_SIZE 1024 * 1024

#define DELIMITER "\r\n"

#define POLL_TIMEOUT 1000

#define HOSTNAME "localhost"

void fillTypes(map<string, string>& types);

#endif