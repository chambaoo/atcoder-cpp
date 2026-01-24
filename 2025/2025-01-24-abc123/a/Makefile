CXX      := docker run --rm -v "$(PWD)":/work -w /work atcoder:gcc15 g++
CXXFLAGS := -std=gnu++23 -O2 -Wall -Wextra -Wshadow

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: all
	docker run --rm -i -v "$(PWD)":/work -w /work atcoder:gcc15 ./main

test: all
	oj t -c 'docker run --rm -i -v "$(PWD)":/work -w /work atcoder:gcc15 ./main'

clean:
	rm -f main

