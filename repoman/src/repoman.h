/*
    This file is part of repoman.

    repoman is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    repoman is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with repoman.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __REPOMAN_H__
#define __REPOMAN_H__

/// Repoman Version String
static const char* const REPOMAN_VERSION = "0.0.1";

/// Repoman Configuration File
static const char* const REPOMAN_CONFIG = "repoman.conf";


/**
* Parsed repoman arguments
* Helper Structure
*/
typedef struct repoman_args
{
    //build a specific folder
    bool folder_build;
    //build specific folder recursive
    bool folder_build_recursive;
    //the folder to build
    char* folder;
    //print out version information
    bool print_version;
} repoman_args;

#endif