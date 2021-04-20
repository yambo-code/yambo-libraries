## Yambo Libraries

This is the distribution of the Libraries needed during the compilation of the Yambo source (http://www.yambo-code.org).

There are two kind of libraries:
* internal: those are derived from the Yambo source itself. Some modular parts have been made independent and exported. 
* external: those are standard libraries packed so to be usable by Yambo.

You do not need to download the library files, unless you don't want to use them for you code.

In any case the libraries will be automatically downloaded either at the git checkout time or when building the source (depending on the way yambo was installed).

In case you are going to compile yambo on a machine that does not have access to the internet, you can first get all needed files in the proper place just entering the yambo source and running (option available since version 5.0)

`./sbin/download_all_libs.sh`

### Internal Libraries (Needed since yambo 5.0)

As part of the modularization of the Yambo code, one of the goals is to split the source into different blocks (or modules), and eventually promote them into libraries. So far we created, as an experimental library, the driver library.
The source code of the library is not contained anymore in the main repo of the yambo code, but it has been moved in this dedicated repository imported as  submodule in the main code.

This is the latest release of the driver
* [driver-0.0.2.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/0.0.2.tar.gz)

### External Libraries

Following a list of libraries that are part of the Yambo code distribution.

* [lapack-3.9.0.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/lapack-3.9.0.tar.gz)
* [netcdf-fortran-4.5.3.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/netcdf-fortran-4.5.3.tar.gz)
* [netcdf-c-4.7.4.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/netcdf-c-4.7.4.tar.gz)
* [pnetcdf-1.12.1.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/pnetcdf-1.12.1.tar.gz)
* [hdf5-1.12.0.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/hdf5-1.12.0.tar.gz)
* [scalapack-2.1.0.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/scalapack-2.1.0.tar.gz)
* [petsc-3.13.4.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/petsc-3.13.4.tar.gz)
* [slepc-3.13.3.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/slepc-3.13.3.tar.gz)
* [iotk-y1.2.2.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/iotk-y1.2.2.tar.gz)
* [etsf_io-1.0.4.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/etsf_io-1.0.4.tar.gz)
* [libxc-2.2.3.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/libxc-2.2.3.tar.gz)
* [blacs.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/blacs.tar.gz)
* [slatec.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/slatec.tar.gz)
* [fftw-3.3.6-pl1.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/fftw-3.3.6-pl1.tar.gz)
* [fftqe.tar.gz](https://github.com/yambo-code/yambo-libraries/raw/master/external/fftqe.tar.gz)
* [futile-1.0](https://github.com/yambo-code/yambo-libraries/raw/master/external/futile-yambo.tar.gz)
* [yaml-0.2.2](https://github.com/yambo-code/yambo-libraries/raw/master/external/yaml-0.2.2.tar.gz)

### GIT-lfs (for developers)

Main source: https://docs.github.com/en/github/managing-large-files/

#### Step-by-step
Installation: https://docs.github.com/en/github/managing-large-files/installing-git-large-file-storage

### Yambo
Yambo doesn't stand for anything like "Yet Another Many-Body cOde", for instance.  Unless you really want it to. 

For more information, see the general documentation on the web site http://www.yambo-code.org/

Compiling:  http://www.yambo-code.org/download/compiling.php
Installing: http://www.yambo-code.org/download/installing.php
Getting started: http://www.yambo-code.org/doc/getting_started.php

All the material included in this distribution is free software;
you can redistribute it and/or modify it under the terms of the GNU
General Public License as published by the Free Software Foundation;
either version 2 of the License, or (at your option) any later version.

These programs are distributed in the hope that they will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
for more details (see COPYING file).



