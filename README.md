# pmp-template

This repository provides a simple project template for writing your own
algorithms and applications using the pmp-library. It directly includes the
pmp-library repository as a git submodule. To get started, just clone the
repository recursively:

    $ git clone --recursive https://github.com/pmp-library/pmp-template.git

Configure and build:

    $ cd pmp-template && mkdir build && cd build && cmake .. && make

This will automatically build the pmp-library and its dependecies.

## License

As the pmp-library itself, his tempalte is provided under a flexible 3-clause
BSD [license](./LICENSE.txt), thereby allowing for both open-source and
commercial usage.
