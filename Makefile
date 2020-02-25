# https://github.com/bluedreamer/cpp_project_skel
MF_VER=0.2
BINARY=parser
TEST_BINARY=tests/test_parser
CC=gcc
CXX=g++
SRC=main.cpp template.cpp
TEST_SRC=tests/main.cpp
OBJS=$(SRC:.cpp=.o)
TEST_OBJS=$(TEST_SRC:.cpp=.o)
DEPS=$(SRC:.cpp=.d)
LIBS=
INCLUDES=-I3rdparty
WARNINGS=-Wall -Wextra -Wpedantic -Weffc++ -Wconversion
DEBUG=-ggdb3
CXXFLAGS:=${DEBUG} -std=c++17 ${INCLUDES} ${WARNINGS}
LFLAGS=

all: ${BINARY} ${TEST_BINARY} run_tests

${BINARY}: ${OBJS}
	${CXX} -o $@ ${OBJS} ${LIBS} ${LFLAGS}

${TEST_BINARY}: ${TEST_OBJS} ${OBJS}
	${CXX} -o $@ ${TEST_OBJS} ${LIBS} ${LFLAGS}

run_tests: ${TEST_BINARY}
	${TEST_BINARY}

.PHONY: clean run_tests

clean:
	rm -f ${OBJS} ${DEPS} ${BINARY} ${TEST_BINARY} ${TEST_OBJS}

git_clean:
	git clean -xf

-include ${DEPS}

%.d: %.cpp
	${CXX} -MM $< -MF $@ ${CXXFLAGS}

# vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
