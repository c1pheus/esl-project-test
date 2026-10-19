SRCS = main.c vector.c
OBJS := $(SRCS:.c=.o)

test: $(OBJS)
	gcc -o $@ $^

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJS) test

.PHONY: clean
