CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = box_fill.c check.c cond_to_tab.c coordinate.c board.c count_boxes.c bypass.c utils.c
OBJS = $(SRCS:.c=.o)
MAIN = skyscraper

all:		$(MAIN)
			@echo	Program $(MAIN) has been successfuly compiled

$(MAIN):	$(OBJS)
			$(CC) $(CFLAGS) -o $(MAIN) $(MAIN).c $(OBJS)

.c.o:
			$(CC) $(CFLAGS) -o $@ $< -c

tests:		test_tab

test_tab:	board.o cond_to_tab.o coordinate.o
			$(CC) $(CFLAGS) -o $@ $@.c $^

re:			clean $(MAIN)

clean:
			$(RM) $(MAIN) *.o *.h.gch
