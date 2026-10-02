//  (c) Copyright Fernando Luis Cacciola Carballal 2000-2004
//  Use, modification, and distribution is subject to the Boost Software
//  License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See library home page at http://www.boost.org/libs/numeric/conversion
//
// Contact the author at: fernando_cacciola@hotmail.com
// 
#ifndef BOOST_NUMERIC_CONVERSION_UDT_BUILTIN_MIXTURE_ENUM_FLC_12NOV2002_HPP
#define BOOST_NUMERIC_CONVERSION_UDT_BUILTIN_MIXTURE_ENUM_FLC_12NOV2002_HPP

namespace boost { namespace numeric
{
  enum udt_builtin_mixture_enum
  {
     builtin_to_builtin
    ,builtin_to_udt
    ,udt_to_builtin
    ,udt_to_udt
    // Widen enum range so boost::mpl integral_c next/prior wrappers (value±1)
    // remain representable as template arguments (clang 16+ rejects out-of-range).
    ,_udt_mixture_mpl_range_lo = -1
    ,_udt_mixture_mpl_range_hi = 4
  } ;

} } // namespace boost::numeric

#endif

