# Makefile to compile and install sum_calc, sub_calc, and gen_calc

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin/gen_calc

all: sum_calc sub_calc gen_calc

sum_calc: sum_calc.c
	$(CC) $(CFLAGS) -o sum_calc sum_calc.c

sub_calc: sub_calc.c
	$(CC) $(CFLAGS) -o sub_calc sub_calc.c

gen_calc: gen_calc.c
	$(CC) $(CFLAGS) -o gen_calc gen_calc.c

install: all
	install -d $(BINDIR)
	install -m 755 sum_calc $(BINDIR)
	install -m 755 sub_calc $(BINDIR)
	install -m 755 gen_calc $(BINDIR)

uninstall:
	rm -f $(BINDIR)/sum_calc
	rm -f $(BINDIR)/sub_calc
	rm -f $(BINDIR)/gen_calc
	rmdir $(BINDIR)

clean:
	rm -f sum_calc sub_calc gen_calc

.PHONY: all clean install

