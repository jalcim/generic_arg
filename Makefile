NAME = exe_test

SRC = 	src/wrap_strcat.c \
	src/wrap_strncat.c

TOOLS = tools/make_arg.c

TEST = 	test/main.c \
	test/test_strcat.c \
	test/test_strncat.c

all:
	gcc -g -o exe_test $(SRC) $(TOOLS) $(TEST)
re:
	rm $(NAME)
	gcc -g -o exe_test $(SRC) $(TOOLS) $(TEST)
