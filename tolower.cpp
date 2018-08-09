#include <string>
#include <algorithm>

using namespace std;

string convert_to_lower(string string_to_convert){
	transform(string_to_convert.begin(),string_to_convert.end(),string_to_convert.begin(),::tolower);
	return string_to_convert;
}