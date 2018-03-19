CXX=g++
CXXFLAGS+=-g
CXXFLAGS+=-Wall
MAIN=stest
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)


$(MAIN): $(OBJ)
		$(CXX) $? -o $@

$(OBJ): $(SRC)
		$(CXX) $(CXXFLAGS) -c $*.cpp -o $@

class:
	touch $(cn).h $(cn).cpp
	echo "#pragma once" > $(cn).h
	echo "#include \"$(cn).h\"" > $(cn).cpp
	echo "class $(cn)" >> $(cn).h
	echo "{" >> $(cn).h
	echo "};" >> $(cn).h

clean:
	rm -f $(MAIN) $(OBJ)
