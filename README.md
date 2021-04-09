# ND C++ Template
ND basic template for C++.
Contains basic structuring of classes and accompanying cmake files.

## Install build tools
On CentOS/Fedora run the following line in a terminal:
```
sudo dnf groupinstall "Development Tools" "Development Libraries"
```

On Ubuntu run the following line in a terminal:
```
sudo apt-get install build-essential
```

## Building project
First time, and when new source files have been added.
Starting in the project folder:
```
mkdir build
cd build
cmake ..
make
```

Then:
```
cd build
make
```