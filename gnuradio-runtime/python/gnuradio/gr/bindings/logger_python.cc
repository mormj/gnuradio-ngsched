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
/* BINDTOOL_HEADER_FILE(logger.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b33cd69af8d2dbab606b4c06924203e4)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/logger.h>

void bind_logger(py::module& m)
{
    using logger = gr::logger;
    using logger_config = gr::logger_config;


    py::class_<logger, std::shared_ptr<logger>>(m, "logger")

        .def(py::init<std::string>(), py::arg("logger_name"))
        .def(py::init<gr::logger const&>(), py::arg("arg0"))

        .def("set_level", &logger::set_level, py::arg("level"))
        .def("get_level", &logger::get_level, py::arg("level"))
        .def("debug", &logger::debug, py::arg("msg"))
        .def("info", &logger::info, py::arg("msg"))
        .def("notice", &logger::notice, py::arg("msg"))
        .def("warn", &logger::warn, py::arg("msg"))
        .def("error", &logger::error, py::arg("msg"))
        .def("crit", &logger::crit, py::arg("msg"))
        .def("alert", &logger::alert, py::arg("msg"))
        .def("fatal", &logger::fatal, py::arg("msg"))
        .def("emerg", &logger::emerg, py::arg("msg"))
        .def("errorIF", &logger::errorIF, py::arg("cond"), py::arg("msg"))
        .def("log_assert", &logger::log_assert, py::arg("cond"), py::arg("msg"))
        .def("add_console_appender",
             &logger::add_console_appender,
             py::arg("target"),
             py::arg("pattern"))
        .def("set_console_appender",
             &logger::set_console_appender,
             py::arg("target"),
             py::arg("pattern"))
        .def("add_file_appender",
             &logger::add_file_appender,
             py::arg("filename"),
             py::arg("append"),
             py::arg("pattern"))
        .def("set_file_appender",
             &logger::set_file_appender,
             py::arg("filename"),
             py::arg("append"),
             py::arg("pattern"))
        .def("add_rollingfile_appender",
             &logger::add_rollingfile_appender,
             py::arg("filename"),
             py::arg("filesize"),
             py::arg("bkup_index"),
             py::arg("append"),
             py::arg("mode"),
             py::arg("pattern"));


    py::class_<logger_config, std::shared_ptr<logger_config>>(m, "logger_config")


        .def_static("get_filename", &logger_config::get_filename)
        .def_static("get_watch_period", &logger_config::get_watch_period)
        .def_static("load_config",
                    &logger_config::load_config,
                    py::arg("filename"),
                    py::arg("watch_period") = 0)
        .def_static("stop_watch", &logger_config::stop_watch)
        .def_static("reset_config", &logger_config::reset_config);


    // m.def("configure_default_loggers",&gr::configure_default_loggers,
    //     py::arg("l"),
    //     py::arg("d"),
    //     py::arg("name")
    // );
    m.def("update_logger_alias",
          &gr::update_logger_alias,
          py::arg("name"),
          py::arg("alias"));
    m.def("logger_get_logger", &gr::logger_get_logger, py::arg("name"));
    m.def("logger_load_config", &gr::logger_load_config, py::arg("config_filename") = "");
    m.def("gr_logger_reset_config", &gr_logger_reset_config);
    m.def("logger_set_level",
          (void (*)(gr::logger_ptr, std::string const&)) & gr::logger_set_level,
          py::arg("logger"),
          py::arg("level"));
    m.def("logger_set_level",
          (void (*)(gr::logger_ptr, log4cpp::Priority::Value)) & gr::logger_set_level,
          py::arg("logger"),
          py::arg("level"));
    m.def("logger_get_level",
          (void (*)(gr::logger_ptr, std::string&)) & gr::logger_get_level,
          py::arg("logger"),
          py::arg("level"));
    // m.def("logger_get_level",(void (*)(gr::logger_ptr, log4cpp::Priority::Value
    // &))&gr::logger_get_level,
    //     py::arg("logger"),
    //     py::arg("level")
    // );
    // m.def("logger_add_appender",&gr::logger_add_appender,
    //     py::arg("logger"),
    //     py::arg("appender")
    // ); // Not Implemented
    // m.def("logger_set_appender",&gr::logger_set_appender,
    //     py::arg("logger"),
    //     py::arg("appender")
    // ); // Not Implemented
    m.def("logger_add_console_appender",
          &gr::logger_add_console_appender,
          py::arg("logger"),
          py::arg("target"),
          py::arg("pattern"));
    m.def("logger_set_console_appender",
          &gr::logger_set_console_appender,
          py::arg("logger"),
          py::arg("target"),
          py::arg("pattern"));
    m.def("logger_add_file_appender",
          &gr::logger_add_file_appender,
          py::arg("logger"),
          py::arg("filename"),
          py::arg("append"),
          py::arg("pattern"));
    m.def("logger_set_file_appender",
          &gr::logger_set_file_appender,
          py::arg("logger"),
          py::arg("filename"),
          py::arg("append"),
          py::arg("pattern"));
    m.def("logger_add_rollingfile_appender",
          &gr::logger_add_rollingfile_appender,
          py::arg("logger"),
          py::arg("filename"),
          py::arg("filesize"),
          py::arg("bkup_index"),
          py::arg("append"),
          py::arg("mode"),
          py::arg("pattern"));
    m.def("logger_get_logger_names", &gr::logger_get_logger_names);
}
