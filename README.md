# cpp_template
ND Template for C++

Contains basic structuring of classes and basic cmake example.

## Install build tools
On CentOS/Fedora run the following line from a terminal:
```
sudo dnf groupinstall "Development Tools" "Development Libraries"
```

On Ubuntu run the following line from a terminal:
```
sudo apt-get install build-essential
```

## Building project
First time, and when new source files have been added.
Starting in the project folder:
```
cd build
cmake ..
make
```

Then:
```
cd build
make
```