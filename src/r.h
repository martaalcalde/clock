#ifndef CIVIL_R_H
#define CIVIL_R_H

// Required to include something with the cpp11 namespace so
// cpp11 attributes work. This also includes <Rinternals.h> for us.
#include <cpp11/R.hpp>

#define r_null R_NilValue
#define r_ssize R_xlen_t
#define sexp SEXP

#define r_dbl_na NA_REAL

#define r_base_env R_BaseEnv
#define r_empty_env R_EmptyEnv

enum r_type {
  r_type_null        = 0,
  r_type_symbol      = 1,
  r_type_pairlist    = 2,
  r_type_closure     = 3,
  r_type_environment = 4,
  r_type_promise     = 5,
  r_type_call        = 6,
  r_type_special     = 7,
  r_type_builtin     = 8,
  r_type_string      = 9,
  r_type_logical     = 10,
  r_type_integer     = 13,
  r_type_double      = 14,
  r_type_complex     = 15,
  r_type_character   = 16,
  r_type_dots        = 17,
  r_type_any         = 18,
  r_type_list        = 19,
  r_type_expression  = 20,
  r_type_bytecode    = 21,
  r_type_pointer     = 22,
  r_type_weakref     = 23,
  r_type_raw         = 24,
  r_type_s4          = 25,

  r_type_new         = 30,
  r_type_free        = 31,

  r_type_function    = 99
};

#endif
