
CXXFLAGS=-g -std=c++14 -Wall -pedantic 
# CXXFLAGS=-g -std=c++14 -DNDEBUG
CC=$(CXX)
INCS=$(shell ls *.h)

base_der: base_der.cpp 

beam: beam.cpp 

complex: complex.cpp 

complex_struct: complex_struct.cpp 

exceptions: exceptions.cpp

struct_class: struct_class.cpp 

funcs: funcs.cpp 

hello: hello.cpp 

hello_nm: hello_nm.cpp 

mean: mean.cpp 

recursion: recursion.cpp base_conv.cpp

stl: stl.cpp

tests:

prod:
	-git commit -a 
	git push origin master

nocrud:
	rm *~
