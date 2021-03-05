# pmp-template

This repository provides a simple project template for writing your own
algorithms and applications using the pmp-library. It directly includes the
pmp-library repository as a git submodule. To get started, just clone the
repository recursively:

    git clone --recursive https://github.com/pmp-library/pmp-template.git

Configure and build:

    cd pmp-template && mkdir build && cd build && cmake .. && make

Run the viewer:

    ./myviewer

## License

As the pmp-library itself, this template is provided under a simple and flexible MIT-style
[license](https://github.com/pmp-library/pmp-template/blob/master/LICENSE.txt),
thereby allowing for both open-source and commercial usage.
