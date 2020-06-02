/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(crc32.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(68481b3e03e592f988af1aa2821ee982)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/crc32.h>
// pydoc.h is automatically generated in the build directory
#include <crc32_pydoc.h>

void bind_crc32(py::module& m)
{


    m.def("update_crc32",
          (unsigned int (*)(unsigned int, unsigned char const*, size_t)) &
              ::gr::digital::update_crc32,
          py::arg("crc"),
          py::arg("buf"),
          py::arg("len"),
          D(update_crc32, 0));


    m.def("update_crc32",
          (unsigned int (*)(unsigned int, std::string const)) &
              ::gr::digital::update_crc32,
          py::arg("crc"),
          py::arg("buf"),
          D(update_crc32, 1));


    m.def("crc32",
          (unsigned int (*)(unsigned char const*, size_t)) & ::gr::digital::crc32,
          py::arg("buf"),
          py::arg("len"),
          D(crc32, 0));


    m.def("crc32",
          (unsigned int (*)(std::string const)) & ::gr::digital::crc32,
          py::arg("buf"),
          D(crc32, 1));
}