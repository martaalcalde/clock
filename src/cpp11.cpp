// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// arithmetic.cpp
SEXP add_years_posixct_cpp(SEXP x, SEXP n, SEXP day_resolver, SEXP dst_resolver, SEXP size);
extern "C" SEXP _civil_add_years_posixct_cpp(SEXP x, SEXP n, SEXP day_resolver, SEXP dst_resolver, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_years_posixct_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(x), cpp11::as_cpp<cpp11::decay_t<SEXP>>(n), cpp11::as_cpp<cpp11::decay_t<SEXP>>(day_resolver), cpp11::as_cpp<cpp11::decay_t<SEXP>>(dst_resolver), cpp11::as_cpp<cpp11::decay_t<SEXP>>(size)));
  END_CPP11
}
// arithmetic.cpp
SEXP add_years_local_cpp(SEXP x, SEXP n, SEXP day_resolver, SEXP size);
extern "C" SEXP _civil_add_years_local_cpp(SEXP x, SEXP n, SEXP day_resolver, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_years_local_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(x), cpp11::as_cpp<cpp11::decay_t<SEXP>>(n), cpp11::as_cpp<cpp11::decay_t<SEXP>>(day_resolver), cpp11::as_cpp<cpp11::decay_t<SEXP>>(size)));
  END_CPP11
}
// chrono.cpp
SEXP civil_add_chrono_cpp(SEXP x, SEXP years, SEXP months, SEXP weeks, SEXP days, SEXP hours, SEXP minutes, SEXP seconds, SEXP size);
extern "C" SEXP _civil_civil_add_chrono_cpp(SEXP x, SEXP years, SEXP months, SEXP weeks, SEXP days, SEXP hours, SEXP minutes, SEXP seconds, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(civil_add_chrono_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(x), cpp11::as_cpp<cpp11::decay_t<SEXP>>(years), cpp11::as_cpp<cpp11::decay_t<SEXP>>(months), cpp11::as_cpp<cpp11::decay_t<SEXP>>(weeks), cpp11::as_cpp<cpp11::decay_t<SEXP>>(days), cpp11::as_cpp<cpp11::decay_t<SEXP>>(hours), cpp11::as_cpp<cpp11::decay_t<SEXP>>(minutes), cpp11::as_cpp<cpp11::decay_t<SEXP>>(seconds), cpp11::as_cpp<cpp11::decay_t<SEXP>>(size)));
  END_CPP11
}
// initialize.cpp
SEXP civil_init();
extern "C" SEXP _civil_civil_init() {
  BEGIN_CPP11
    return cpp11::as_sexp(civil_init());
  END_CPP11
}
// install.cpp
void civil_set_install(SEXP path);
extern "C" SEXP _civil_civil_set_install(SEXP path) {
  BEGIN_CPP11
    civil_set_install(cpp11::as_cpp<cpp11::decay_t<SEXP>>(path));
    return R_NilValue;
  END_CPP11
}
// local-datetime.cpp
SEXP localize_posixct_cpp(SEXP x);
extern "C" SEXP _civil_localize_posixct_cpp(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(localize_posixct_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(x)));
  END_CPP11
}
// local-datetime.cpp
SEXP unlocalize_cpp(SEXP x, SEXP zone, SEXP dst_resolver);
extern "C" SEXP _civil_unlocalize_cpp(SEXP x, SEXP zone, SEXP dst_resolver) {
  BEGIN_CPP11
    return cpp11::as_sexp(unlocalize_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(x), cpp11::as_cpp<cpp11::decay_t<SEXP>>(zone), cpp11::as_cpp<cpp11::decay_t<SEXP>>(dst_resolver)));
  END_CPP11
}
// local.cpp
SEXP civil_add_local_cpp(SEXP x, SEXP years, SEXP months, SEXP weeks, SEXP days, SEXP hours, SEXP minutes, SEXP seconds, SEXP dst_nonexistant, SEXP dst_ambiguous, SEXP size);
extern "C" SEXP _civil_civil_add_local_cpp(SEXP x, SEXP years, SEXP months, SEXP weeks, SEXP days, SEXP hours, SEXP minutes, SEXP seconds, SEXP dst_nonexistant, SEXP dst_ambiguous, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(civil_add_local_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(x), cpp11::as_cpp<cpp11::decay_t<SEXP>>(years), cpp11::as_cpp<cpp11::decay_t<SEXP>>(months), cpp11::as_cpp<cpp11::decay_t<SEXP>>(weeks), cpp11::as_cpp<cpp11::decay_t<SEXP>>(days), cpp11::as_cpp<cpp11::decay_t<SEXP>>(hours), cpp11::as_cpp<cpp11::decay_t<SEXP>>(minutes), cpp11::as_cpp<cpp11::decay_t<SEXP>>(seconds), cpp11::as_cpp<cpp11::decay_t<SEXP>>(dst_nonexistant), cpp11::as_cpp<cpp11::decay_t<SEXP>>(dst_ambiguous), cpp11::as_cpp<cpp11::decay_t<SEXP>>(size)));
  END_CPP11
}
// rezone.cpp
SEXP civil_force_zone_cpp(SEXP x, SEXP tzone, SEXP dst_nonexistant, SEXP dst_ambiguous);
extern "C" SEXP _civil_civil_force_zone_cpp(SEXP x, SEXP tzone, SEXP dst_nonexistant, SEXP dst_ambiguous) {
  BEGIN_CPP11
    return cpp11::as_sexp(civil_force_zone_cpp(cpp11::as_cpp<cpp11::decay_t<SEXP>>(x), cpp11::as_cpp<cpp11::decay_t<SEXP>>(tzone), cpp11::as_cpp<cpp11::decay_t<SEXP>>(dst_nonexistant), cpp11::as_cpp<cpp11::decay_t<SEXP>>(dst_ambiguous)));
  END_CPP11
}
// zone.cpp
SEXP zone_standardize(SEXP zone);
extern "C" SEXP _civil_zone_standardize(SEXP zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(zone_standardize(cpp11::as_cpp<cpp11::decay_t<SEXP>>(zone)));
  END_CPP11
}
// zone.cpp
SEXP zone_is_valid(SEXP zone);
extern "C" SEXP _civil_zone_is_valid(SEXP zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(zone_is_valid(cpp11::as_cpp<cpp11::decay_t<SEXP>>(zone)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _civil_add_years_local_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_add_years_posixct_cpp(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_civil_add_chrono_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_civil_add_local_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_civil_force_zone_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_civil_init();
extern SEXP _civil_civil_set_install(SEXP);
extern SEXP _civil_localize_posixct_cpp(SEXP);
extern SEXP _civil_unlocalize_cpp(SEXP, SEXP, SEXP);
extern SEXP _civil_zone_is_valid(SEXP);
extern SEXP _civil_zone_standardize(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_civil_add_years_local_cpp",   (DL_FUNC) &_civil_add_years_local_cpp,    4},
    {"_civil_add_years_posixct_cpp", (DL_FUNC) &_civil_add_years_posixct_cpp,  5},
    {"_civil_civil_add_chrono_cpp",  (DL_FUNC) &_civil_civil_add_chrono_cpp,   9},
    {"_civil_civil_add_local_cpp",   (DL_FUNC) &_civil_civil_add_local_cpp,   11},
    {"_civil_civil_force_zone_cpp",  (DL_FUNC) &_civil_civil_force_zone_cpp,   4},
    {"_civil_civil_init",            (DL_FUNC) &_civil_civil_init,             0},
    {"_civil_civil_set_install",     (DL_FUNC) &_civil_civil_set_install,      1},
    {"_civil_localize_posixct_cpp",  (DL_FUNC) &_civil_localize_posixct_cpp,   1},
    {"_civil_unlocalize_cpp",        (DL_FUNC) &_civil_unlocalize_cpp,         3},
    {"_civil_zone_is_valid",         (DL_FUNC) &_civil_zone_is_valid,          1},
    {"_civil_zone_standardize",      (DL_FUNC) &_civil_zone_standardize,       1},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_civil(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
