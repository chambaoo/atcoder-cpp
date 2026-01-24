CXX      := docker run --rm -v "$(PWD)":/work -w /work atcoder:gcc15 g++
CXXFLAGS := -std=gnu++23 -O2 -Wall -Wextra -Wshadow

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: all
	docker run --rm -i -v "$(PWD)":/work -w /work atcoder:gcc15 ./main

test: all
	oj t -c 'docker run --rm -i -v "$(PWD)":/work -w /work atcoder:gcc15 ./main'

# make newtest 3     -> sample_3.in/out
# make newtest 1 4   -> sample_1〜sample_4.in/out
ARGS := $(filter-out newtest,$(MAKECMDGOALS))

newtest:
	@set -e; \
	if [ "$(ARGS)" = "" ]; then \
	  echo "Usage: make newtest 3   # 3 だけ"; \
	  echo "       make newtest 1 4 # 1〜4 まで"; \
	  exit 1; \
	fi; \
	set -- $(ARGS); \
	if [ "$$#" -eq 1 ]; then \
	  s="$$1"; e="$$1"; \
	elif [ "$$#" -eq 2 ]; then \
	  s="$$1"; e="$$2"; \
	else \
	  echo "Usage: make newtest 3   # 3 だけ"; \
	  echo "       make newtest 1 4 # 1〜4 まで"; \
	  exit 1; \
	fi; \
	if [ "$$s" -gt "$$e" ]; then \
	  tmp="$$s"; s="$$e"; e="$$tmp"; \
	fi; \
	mkdir -p test; \
	i="$$s"; \
	while [ "$$i" -le "$$e" ]; do \
	  echo "create test/sample_$$i.in/out"; \
	  touch "test/sample_$$i.in" "test/sample_$$i.out"; \
	  i=$$((i+1)); \
	done

clean:
	rm -f main

%:
	@:
