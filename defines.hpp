/*
 * \file defines.hpp
 * \brief A few general definitions
 *
 * required compiler options:
 *          -std=c++11 (or higher)
 *
 * recommended compiler options:
 *          -O2
 *
 * Copyright (c) 2019 Nikolas Koesling
 *
 */

#pragma once
#include <string>

//! gcc __PRETTY_FUNCTION__ as std::string
#define __CURRENT_FUNCTION__ std::string(__PRETTY_FUNCTION__)

/*! \brief std::runtime_error with standardized error message: functionality not implemented
 *
 * arguments:
 *   - functionality: short string to describe the functionality which is not implemented
 */
#define not_implemented_exception(functionality) \
    std::runtime_error(__CURRENT_FUNCTION__ + ": " + functionality + " is not implemented!")

//! std::runtime_error with standardized error message: function not implemented
#define function_not_implemented_exception not_implemented_exception("this function")

//! std::runtime_error with standardized error message: this function is not allowed to be called
#define function_not_allowed_exception \
    std::runtime_error(__CURRENT_FUNCTION__ + ": May not be used with objects of this type.")

//! std::runtime_error with standardized error message: program is in a illegal state
#define illegal_program_state(description) \
    std::runtime_error(__CURRENT_FUNCTION__ + ": program is in a illegal state: " + description)

// ----------------- TIME CONSTANTS ------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------------------

#define NSEC_PER_SEC 1000000000             //!< nanoseconds per second
#define USEC_PER_SEC 1000000                //!< microseconds per second
#define MSEC_PER_SEC 1000                   //!< milliseconds per second
#define NSEC_PER_MSEC 1000000               //!< nanoseconds per millisecond
#define USEC_PER_MSEC 1000                  //!< microseconds per millisecond
#define NSEC_PER_USEC 1000                  //!< nanoseconds per microsecond

#define SEC_PER_MIN 60                      //!< seconds per minute
#define MIN_PER_H 60                        //!< minutes per second
#define H_PER_D 24                          //!< hours per day
