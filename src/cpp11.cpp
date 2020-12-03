// Generated by cpp11: do not edit by hand
// clang-format off

#include "civil_types.h"
#include "cpp11/declarations.hpp"

// adjust.cpp
civil_writable_rcrd adjust_naive_gregorian_days_cpp(const civil_rcrd& x, const cpp11::integers& value, const cpp11::strings& day_nonexistent, const cpp11::integers& size, const cpp11::strings& adjuster);
extern "C" SEXP _civil_adjust_naive_gregorian_days_cpp(SEXP x, SEXP value, SEXP day_nonexistent, SEXP size, SEXP adjuster) {
  BEGIN_CPP11
    return cpp11::as_sexp(adjust_naive_gregorian_days_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(value), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(adjuster)));
  END_CPP11
}
// adjust.cpp
civil_writable_rcrd adjust_naive_gregorian_time_of_day_cpp(const civil_rcrd& x, const cpp11::integers& value, const cpp11::integers& size, const cpp11::strings& adjuster);
extern "C" SEXP _civil_adjust_naive_gregorian_time_of_day_cpp(SEXP x, SEXP value, SEXP size, SEXP adjuster) {
  BEGIN_CPP11
    return cpp11::as_sexp(adjust_naive_gregorian_time_of_day_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(value), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(adjuster)));
  END_CPP11
}
// adjust.cpp
civil_writable_rcrd adjust_naive_gregorian_nanos_of_second_cpp(const civil_rcrd& x, const cpp11::integers& value, const cpp11::integers& size, const cpp11::strings& adjuster);
extern "C" SEXP _civil_adjust_naive_gregorian_nanos_of_second_cpp(SEXP x, SEXP value, SEXP size, SEXP adjuster) {
  BEGIN_CPP11
    return cpp11::as_sexp(adjust_naive_gregorian_nanos_of_second_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(value), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(adjuster)));
  END_CPP11
}
// adjust.cpp
civil_writable_rcrd adjust_naive_fiscal_days_cpp(const civil_rcrd& x, const cpp11::integers& value, const int& fiscal_start, const cpp11::strings& day_nonexistent, const cpp11::integers& size, const cpp11::strings& adjuster);
extern "C" SEXP _civil_adjust_naive_fiscal_days_cpp(SEXP x, SEXP value, SEXP fiscal_start, SEXP day_nonexistent, SEXP size, SEXP adjuster) {
  BEGIN_CPP11
    return cpp11::as_sexp(adjust_naive_fiscal_days_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(value), cpp11::as_cpp<cpp11::decay_t<const int&>>(fiscal_start), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(adjuster)));
  END_CPP11
}
// arithmetic.cpp
civil_writable_rcrd add_years_or_months_gregorian_cpp(const civil_rcrd& x, const cpp11::integers& n, const cpp11::strings& day_nonexistent, const cpp11::strings& unit, const cpp11::integers& size);
extern "C" SEXP _civil_add_years_or_months_gregorian_cpp(SEXP x, SEXP n, SEXP day_nonexistent, SEXP unit, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_years_or_months_gregorian_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(n), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(unit), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// arithmetic.cpp
civil_writable_rcrd add_weeks_or_days_cpp(const civil_rcrd& x, const cpp11::integers& n, const cpp11::strings& unit, const cpp11::integers& size);
extern "C" SEXP _civil_add_weeks_or_days_cpp(SEXP x, SEXP n, SEXP unit, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_weeks_or_days_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(n), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(unit), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// arithmetic.cpp
civil_writable_rcrd add_hours_or_minutes_or_seconds_cpp(const civil_rcrd& x, const cpp11::integers& n, const cpp11::strings& unit, const cpp11::integers& size);
extern "C" SEXP _civil_add_hours_or_minutes_or_seconds_cpp(SEXP x, SEXP n, SEXP unit, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_hours_or_minutes_or_seconds_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(n), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(unit), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// arithmetic.cpp
civil_writable_rcrd add_milliseconds_or_microseconds_or_nanoseconds_cpp(const civil_rcrd& x, const cpp11::integers& n, const cpp11::strings& unit, const cpp11::integers& size);
extern "C" SEXP _civil_add_milliseconds_or_microseconds_or_nanoseconds_cpp(SEXP x, SEXP n, SEXP unit, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_milliseconds_or_microseconds_or_nanoseconds_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(n), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(unit), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// arithmetic.cpp
civil_writable_rcrd add_years_or_quarters_fiscal_cpp(const civil_rcrd& x, const cpp11::integers& n, const int& fiscal_start, const cpp11::strings& day_nonexistent, const cpp11::strings& unit, const cpp11::integers& size);
extern "C" SEXP _civil_add_years_or_quarters_fiscal_cpp(SEXP x, SEXP n, SEXP fiscal_start, SEXP day_nonexistent, SEXP unit, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(add_years_or_quarters_fiscal_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_rcrd&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(n), cpp11::as_cpp<cpp11::decay_t<const int&>>(fiscal_start), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(unit), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_sys_seconds_to_local_days_and_time_of_day(const cpp11::doubles& seconds, const cpp11::strings& zone);
extern "C" SEXP _civil_convert_sys_seconds_to_local_days_and_time_of_day(SEXP seconds, SEXP zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_sys_seconds_to_local_days_and_time_of_day(cpp11::as_cpp<cpp11::decay_t<const cpp11::doubles&>>(seconds), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone)));
  END_CPP11
}
// converters.cpp
cpp11::writable::doubles convert_local_days_and_time_of_day_to_sys_seconds_cpp(const civil_field& days, const civil_field& time_of_day, const cpp11::strings& zone, const cpp11::strings& dst_nonexistent, const cpp11::strings& dst_ambiguous, const cpp11::integers& size);
extern "C" SEXP _civil_convert_local_days_and_time_of_day_to_sys_seconds_cpp(SEXP days, SEXP time_of_day, SEXP zone, SEXP dst_nonexistent, SEXP dst_ambiguous, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_local_days_and_time_of_day_to_sys_seconds_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(time_of_day), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_ambiguous), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_year_month_day_to_local_fields(const cpp11::integers& year, const cpp11::integers& month, const cpp11::integers& day, const cpp11::strings& day_nonexistent);
extern "C" SEXP _civil_convert_year_month_day_to_local_fields(SEXP year, SEXP month, SEXP day, SEXP day_nonexistent) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_year_month_day_to_local_fields(cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(year), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(month), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(day), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_year_month_day_hour_minute_second_to_local_fields_cpp(const cpp11::integers& year, const cpp11::integers& month, const cpp11::integers& day, const cpp11::integers& hour, const cpp11::integers& minute, const cpp11::integers& second, const cpp11::strings& day_nonexistent);
extern "C" SEXP _civil_convert_year_month_day_hour_minute_second_to_local_fields_cpp(SEXP year, SEXP month, SEXP day, SEXP hour, SEXP minute, SEXP second, SEXP day_nonexistent) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_year_month_day_hour_minute_second_to_local_fields_cpp(cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(year), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(month), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(day), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(hour), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(minute), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(second), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_year_month_day_hour_minute_second_nanos_to_local_fields_cpp(const cpp11::integers& year, const cpp11::integers& month, const cpp11::integers& day, const cpp11::integers& hour, const cpp11::integers& minute, const cpp11::integers& second, const cpp11::integers& nanos, const cpp11::strings& day_nonexistent);
extern "C" SEXP _civil_convert_year_month_day_hour_minute_second_nanos_to_local_fields_cpp(SEXP year, SEXP month, SEXP day, SEXP hour, SEXP minute, SEXP second, SEXP nanos, SEXP day_nonexistent) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_year_month_day_hour_minute_second_nanos_to_local_fields_cpp(cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(year), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(month), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(day), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(hour), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(minute), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(second), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(nanos), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent)));
  END_CPP11
}
// converters.cpp
civil_writable_list_of_integers convert_local_days_to_year_month_day_cpp(const civil_field& days);
extern "C" SEXP _civil_convert_local_days_to_year_month_day_cpp(SEXP days) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_local_days_to_year_month_day_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days)));
  END_CPP11
}
// converters.cpp
civil_writable_list_of_integers convert_local_time_of_day_to_hour_minute_second_cpp(const civil_field& time_of_day);
extern "C" SEXP _civil_convert_local_time_of_day_to_hour_minute_second_cpp(SEXP time_of_day) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_local_time_of_day_to_hour_minute_second_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(time_of_day)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_datetime_fields_from_local_to_zoned_cpp(const civil_field& days, const civil_field& time_of_day, const cpp11::strings& zone, const cpp11::strings& dst_nonexistent, const cpp11::strings& dst_ambiguous, const cpp11::integers& size);
extern "C" SEXP _civil_convert_datetime_fields_from_local_to_zoned_cpp(SEXP days, SEXP time_of_day, SEXP zone, SEXP dst_nonexistent, SEXP dst_ambiguous, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_datetime_fields_from_local_to_zoned_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(time_of_day), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_ambiguous), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_nano_datetime_fields_from_local_to_zoned_cpp(const civil_field& days, const civil_field& time_of_day, const civil_field& nanos_of_second, const cpp11::strings& zone, const cpp11::strings& dst_nonexistent, const cpp11::strings& dst_ambiguous, const cpp11::integers& size);
extern "C" SEXP _civil_convert_nano_datetime_fields_from_local_to_zoned_cpp(SEXP days, SEXP time_of_day, SEXP nanos_of_second, SEXP zone, SEXP dst_nonexistent, SEXP dst_ambiguous, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_nano_datetime_fields_from_local_to_zoned_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(time_of_day), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(nanos_of_second), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_ambiguous), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_datetime_fields_from_zoned_to_local_cpp(const civil_field& days, const civil_field& time_of_day, const cpp11::strings& zone);
extern "C" SEXP _civil_convert_datetime_fields_from_zoned_to_local_cpp(SEXP days, SEXP time_of_day, SEXP zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_datetime_fields_from_zoned_to_local_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(time_of_day), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone)));
  END_CPP11
}
// converters.cpp
civil_writable_rcrd convert_sys_seconds_to_sys_days_and_time_of_day_cpp(const cpp11::doubles& seconds);
extern "C" SEXP _civil_convert_sys_seconds_to_sys_days_and_time_of_day_cpp(SEXP seconds) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_sys_seconds_to_sys_days_and_time_of_day_cpp(cpp11::as_cpp<cpp11::decay_t<const cpp11::doubles&>>(seconds)));
  END_CPP11
}
// converters.cpp
civil_writable_field convert_fiscal_year_quarter_day_to_local_days_cpp(const cpp11::integers& year, const cpp11::integers& quarter, const cpp11::integers& day, int fiscal_start, const cpp11::strings& day_nonexistent);
extern "C" SEXP _civil_convert_fiscal_year_quarter_day_to_local_days_cpp(SEXP year, SEXP quarter, SEXP day, SEXP fiscal_start, SEXP day_nonexistent) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_fiscal_year_quarter_day_to_local_days_cpp(cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(year), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(quarter), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(day), cpp11::as_cpp<cpp11::decay_t<int>>(fiscal_start), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(day_nonexistent)));
  END_CPP11
}
// converters.cpp
cpp11::writable::list_of<cpp11::writable::integers> convert_local_days_to_fiscal_year_quarter_day_cpp(const civil_field& days, int fiscal_start);
extern "C" SEXP _civil_convert_local_days_to_fiscal_year_quarter_day_cpp(SEXP days, SEXP fiscal_start) {
  BEGIN_CPP11
    return cpp11::as_sexp(convert_local_days_to_fiscal_year_quarter_day_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<int>>(fiscal_start)));
  END_CPP11
}
// floor.cpp
civil_writable_field floor_days_to_year_month_precision_cpp(const civil_field& days);
extern "C" SEXP _civil_floor_days_to_year_month_precision_cpp(SEXP days) {
  BEGIN_CPP11
    return cpp11::as_sexp(floor_days_to_year_month_precision_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days)));
  END_CPP11
}
// floor.cpp
civil_writable_field floor_days_to_year_quarter_precision_cpp(const civil_field& days, int fiscal_start);
extern "C" SEXP _civil_floor_days_to_year_quarter_precision_cpp(SEXP days, SEXP fiscal_start) {
  BEGIN_CPP11
    return cpp11::as_sexp(floor_days_to_year_quarter_precision_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<int>>(fiscal_start)));
  END_CPP11
}
// format.cpp
cpp11::writable::strings format_civil_rcrd_cpp(const civil_field& days, const civil_field& time_of_day, const civil_field& nanos_of_second, const cpp11::strings& zone, const cpp11::strings& format, const bool& naive, const bool& nano, const bool& abbreviate_zone);
extern "C" SEXP _civil_format_civil_rcrd_cpp(SEXP days, SEXP time_of_day, SEXP nanos_of_second, SEXP zone, SEXP format, SEXP naive, SEXP nano, SEXP abbreviate_zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(format_civil_rcrd_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(time_of_day), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(nanos_of_second), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(format), cpp11::as_cpp<cpp11::decay_t<const bool&>>(naive), cpp11::as_cpp<cpp11::decay_t<const bool&>>(nano), cpp11::as_cpp<cpp11::decay_t<const bool&>>(abbreviate_zone)));
  END_CPP11
}
// getters.cpp
cpp11::writable::integers get_offset_cpp(const civil_field& days, const civil_field& time_of_day, const cpp11::strings& zone);
extern "C" SEXP _civil_get_offset_cpp(SEXP days, SEXP time_of_day, SEXP zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_offset_cpp(cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(days), cpp11::as_cpp<cpp11::decay_t<const civil_field&>>(time_of_day), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone)));
  END_CPP11
}
// install.cpp
void civil_set_install(const cpp11::strings& path);
extern "C" SEXP _civil_civil_set_install(SEXP path) {
  BEGIN_CPP11
    civil_set_install(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(path));
    return R_NilValue;
  END_CPP11
}
// parse.cpp
civil_writable_rcrd parse_zoned_datetime_cpp(const cpp11::strings& x, const cpp11::strings& format, const cpp11::strings& zone, const cpp11::strings& dst_nonexistent, const cpp11::strings& dst_ambiguous, const cpp11::integers& size);
extern "C" SEXP _civil_parse_zoned_datetime_cpp(SEXP x, SEXP format, SEXP zone, SEXP dst_nonexistent, SEXP dst_ambiguous, SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(parse_zoned_datetime_cpp(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(format), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_nonexistent), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(dst_ambiguous), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(size)));
  END_CPP11
}
// parse.cpp
civil_writable_rcrd parse_naive_datetime_cpp(const cpp11::strings& x, const cpp11::strings& format);
extern "C" SEXP _civil_parse_naive_datetime_cpp(SEXP x, SEXP format) {
  BEGIN_CPP11
    return cpp11::as_sexp(parse_naive_datetime_cpp(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(x), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(format)));
  END_CPP11
}
// zone.cpp
cpp11::writable::strings zone_standardize(const cpp11::strings& zone);
extern "C" SEXP _civil_zone_standardize(SEXP zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(zone_standardize(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone)));
  END_CPP11
}
// zone.cpp
cpp11::writable::logicals zone_is_valid(const cpp11::strings& zone);
extern "C" SEXP _civil_zone_is_valid(SEXP zone) {
  BEGIN_CPP11
    return cpp11::as_sexp(zone_is_valid(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(zone)));
  END_CPP11
}
// zone.cpp
cpp11::writable::strings zone_current();
extern "C" SEXP _civil_zone_current() {
  BEGIN_CPP11
    return cpp11::as_sexp(zone_current());
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _civil_add_hours_or_minutes_or_seconds_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_add_milliseconds_or_microseconds_or_nanoseconds_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_add_weeks_or_days_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_add_years_or_months_gregorian_cpp(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_add_years_or_quarters_fiscal_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_adjust_naive_fiscal_days_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_adjust_naive_gregorian_days_cpp(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_adjust_naive_gregorian_nanos_of_second_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_adjust_naive_gregorian_time_of_day_cpp(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_civil_set_install(SEXP);
extern SEXP _civil_convert_datetime_fields_from_local_to_zoned_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_convert_datetime_fields_from_zoned_to_local_cpp(SEXP, SEXP, SEXP);
extern SEXP _civil_convert_fiscal_year_quarter_day_to_local_days_cpp(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_convert_local_days_and_time_of_day_to_sys_seconds_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_convert_local_days_to_fiscal_year_quarter_day_cpp(SEXP, SEXP);
extern SEXP _civil_convert_local_days_to_year_month_day_cpp(SEXP);
extern SEXP _civil_convert_local_time_of_day_to_hour_minute_second_cpp(SEXP);
extern SEXP _civil_convert_nano_datetime_fields_from_local_to_zoned_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_convert_sys_seconds_to_local_days_and_time_of_day(SEXP, SEXP);
extern SEXP _civil_convert_sys_seconds_to_sys_days_and_time_of_day_cpp(SEXP);
extern SEXP _civil_convert_year_month_day_hour_minute_second_nanos_to_local_fields_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_convert_year_month_day_hour_minute_second_to_local_fields_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_convert_year_month_day_to_local_fields(SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_floor_days_to_year_month_precision_cpp(SEXP);
extern SEXP _civil_floor_days_to_year_quarter_precision_cpp(SEXP, SEXP);
extern SEXP _civil_format_civil_rcrd_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_get_offset_cpp(SEXP, SEXP, SEXP);
extern SEXP _civil_parse_naive_datetime_cpp(SEXP, SEXP);
extern SEXP _civil_parse_zoned_datetime_cpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _civil_zone_current();
extern SEXP _civil_zone_is_valid(SEXP);
extern SEXP _civil_zone_standardize(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_civil_add_hours_or_minutes_or_seconds_cpp",                                 (DL_FUNC) &_civil_add_hours_or_minutes_or_seconds_cpp,                                 4},
    {"_civil_add_milliseconds_or_microseconds_or_nanoseconds_cpp",                 (DL_FUNC) &_civil_add_milliseconds_or_microseconds_or_nanoseconds_cpp,                 4},
    {"_civil_add_weeks_or_days_cpp",                                               (DL_FUNC) &_civil_add_weeks_or_days_cpp,                                               4},
    {"_civil_add_years_or_months_gregorian_cpp",                                   (DL_FUNC) &_civil_add_years_or_months_gregorian_cpp,                                   5},
    {"_civil_add_years_or_quarters_fiscal_cpp",                                    (DL_FUNC) &_civil_add_years_or_quarters_fiscal_cpp,                                    6},
    {"_civil_adjust_naive_fiscal_days_cpp",                                        (DL_FUNC) &_civil_adjust_naive_fiscal_days_cpp,                                        6},
    {"_civil_adjust_naive_gregorian_days_cpp",                                     (DL_FUNC) &_civil_adjust_naive_gregorian_days_cpp,                                     5},
    {"_civil_adjust_naive_gregorian_nanos_of_second_cpp",                          (DL_FUNC) &_civil_adjust_naive_gregorian_nanos_of_second_cpp,                          4},
    {"_civil_adjust_naive_gregorian_time_of_day_cpp",                              (DL_FUNC) &_civil_adjust_naive_gregorian_time_of_day_cpp,                              4},
    {"_civil_civil_set_install",                                                   (DL_FUNC) &_civil_civil_set_install,                                                   1},
    {"_civil_convert_datetime_fields_from_local_to_zoned_cpp",                     (DL_FUNC) &_civil_convert_datetime_fields_from_local_to_zoned_cpp,                     6},
    {"_civil_convert_datetime_fields_from_zoned_to_local_cpp",                     (DL_FUNC) &_civil_convert_datetime_fields_from_zoned_to_local_cpp,                     3},
    {"_civil_convert_fiscal_year_quarter_day_to_local_days_cpp",                   (DL_FUNC) &_civil_convert_fiscal_year_quarter_day_to_local_days_cpp,                   5},
    {"_civil_convert_local_days_and_time_of_day_to_sys_seconds_cpp",               (DL_FUNC) &_civil_convert_local_days_and_time_of_day_to_sys_seconds_cpp,               6},
    {"_civil_convert_local_days_to_fiscal_year_quarter_day_cpp",                   (DL_FUNC) &_civil_convert_local_days_to_fiscal_year_quarter_day_cpp,                   2},
    {"_civil_convert_local_days_to_year_month_day_cpp",                            (DL_FUNC) &_civil_convert_local_days_to_year_month_day_cpp,                            1},
    {"_civil_convert_local_time_of_day_to_hour_minute_second_cpp",                 (DL_FUNC) &_civil_convert_local_time_of_day_to_hour_minute_second_cpp,                 1},
    {"_civil_convert_nano_datetime_fields_from_local_to_zoned_cpp",                (DL_FUNC) &_civil_convert_nano_datetime_fields_from_local_to_zoned_cpp,                7},
    {"_civil_convert_sys_seconds_to_local_days_and_time_of_day",                   (DL_FUNC) &_civil_convert_sys_seconds_to_local_days_and_time_of_day,                   2},
    {"_civil_convert_sys_seconds_to_sys_days_and_time_of_day_cpp",                 (DL_FUNC) &_civil_convert_sys_seconds_to_sys_days_and_time_of_day_cpp,                 1},
    {"_civil_convert_year_month_day_hour_minute_second_nanos_to_local_fields_cpp", (DL_FUNC) &_civil_convert_year_month_day_hour_minute_second_nanos_to_local_fields_cpp, 8},
    {"_civil_convert_year_month_day_hour_minute_second_to_local_fields_cpp",       (DL_FUNC) &_civil_convert_year_month_day_hour_minute_second_to_local_fields_cpp,       7},
    {"_civil_convert_year_month_day_to_local_fields",                              (DL_FUNC) &_civil_convert_year_month_day_to_local_fields,                              4},
    {"_civil_floor_days_to_year_month_precision_cpp",                              (DL_FUNC) &_civil_floor_days_to_year_month_precision_cpp,                              1},
    {"_civil_floor_days_to_year_quarter_precision_cpp",                            (DL_FUNC) &_civil_floor_days_to_year_quarter_precision_cpp,                            2},
    {"_civil_format_civil_rcrd_cpp",                                               (DL_FUNC) &_civil_format_civil_rcrd_cpp,                                               8},
    {"_civil_get_offset_cpp",                                                      (DL_FUNC) &_civil_get_offset_cpp,                                                      3},
    {"_civil_parse_naive_datetime_cpp",                                            (DL_FUNC) &_civil_parse_naive_datetime_cpp,                                            2},
    {"_civil_parse_zoned_datetime_cpp",                                            (DL_FUNC) &_civil_parse_zoned_datetime_cpp,                                            6},
    {"_civil_zone_current",                                                        (DL_FUNC) &_civil_zone_current,                                                        0},
    {"_civil_zone_is_valid",                                                       (DL_FUNC) &_civil_zone_is_valid,                                                       1},
    {"_civil_zone_standardize",                                                    (DL_FUNC) &_civil_zone_standardize,                                                    1},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_civil(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
