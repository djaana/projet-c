CC       = gcc
CFLAGS   = -Wall -Werror -std=c99 -fstack-protector -Isrc
LDFLAGS  =

SRCDIR   = src
OBJDIR   = build
BINDIR   = bin

SRC      = $(shell find $(SRCDIR) -name '*.c')
OBJ      = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

TARGET   = $(BINDIR)/main

.PHONY: all build run clean re

all: build

build: $(TARGET)

run: build
	./$(TARGET)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

re: clean build

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@