

#ifndef base64_h
#define base64_h

#include <string>

#ifdef __cplusplus
extern "C"
{
#endif

std::string base64_encode(unsigned char const* bytes_to_encode, unsigned int in_len);
std::string base64_decode(std::string const& encoded_string);


#ifdef __cplusplus
}
#endif

#endif /* base64_h */