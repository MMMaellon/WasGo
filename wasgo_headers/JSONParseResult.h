/* THIS FILE IS GENERATED */
#ifndef JSONPARSERESULT_H
#define JSONPARSERESULT_H

#include <stdint.h>

#include "Reference.h"
#include "String.h"
#include "Erro.h"
#include "Variant.h"
class JSONParseResult : public Reference{
public: JSONParseResult();
enum.Error  get_error();
enum.Error  get_error();
int  get_error_line();
int  get_error_line();
String  get_error_string();
String  get_error_string();
Variant  get_result();
Variant  get_result();
void  set_error(int error);
void  set_error_line(int error_line);
void  set_error_string(String error_string);
void  set_result(Variant result);
};
#endif